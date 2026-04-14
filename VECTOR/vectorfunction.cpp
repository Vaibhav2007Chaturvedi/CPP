// Vector Function:
// 1)push_back(): Add Eelement at the end.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n=3;
    v.push_back(10);
    v.push_back(21);
    v.push_back(23);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}