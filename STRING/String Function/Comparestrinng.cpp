// 2. COMPARE STRING:
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1="abc";
    string s2="abc";
    if(s1.compare(s2)==0){
        cout<<"String are equal"<<endl;
    }
    else{
        cout<<"String are not equal"<<endl;
    }
    return 0;
    
}