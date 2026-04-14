// VECTOR: A vector is simply a sequence of element that you can access by an index.
// or vector is a dynamic array in c++ stl
// It Can: grow automatically in size,Store elemants of same type and provide random access like arrays.

#include<vector>
#include<iostream>
using namespace std;
int main(){
    // CREATING VECTOR:
    // vector<int>v; //Empty
    // vector<int> v2 = {1,2,3};   // with values
    // vector<int> v3(5);          // size = 5 (default 0)
    // vector<int> v4(5, 10);      // size=5, all element =10;

    // INPUT AND OUTPUT:
    vector<int> v(5);
    for(int i=0;i<5;i++){
        cin>>v[i];
    }
    // OUTPUT:
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
    
}
