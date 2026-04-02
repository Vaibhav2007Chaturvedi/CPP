// OPERATORS ARE OF FIVE TYPES:
// 1)ARITHMETIC OPERATORS 
// 2)RELATIONAL OPERATORS
// 3)LOGICAL OPERTAORS 
// 4)ASSIGNMENT OPERATORS 
// 5)BITWISE OPERATORS

#include<iostream>
using namespace std;
int main(){
    // Arithmetic operators:
    int a=10,b=4;
    cout<<"adittion :"<<a+b<<endl;
    cout<<"subt. :"<<a-b<<endl;
    cout<<"division : "<<a/b<<endl;
    cout<<"modules :"<<a%b<<endl;
    // Relational operators:
    cout<<(a==b)<<endl;
    cout<<(a!=b)<<endl;
    cout<<(a>b)<<endl;
    cout<<(a<b)<<endl;
    cout<<(a<=b)<<endl;
    // Logicial operators:
    cout<<((a<b)&&(a>0))<<endl;
    cout<<((a>b)||(a<0))<<endl;
    cout<<!(a<b)<<endl;
    // Assignement operators:
    a+=5;
    cout<<a<<endl;
    a-=5;
    cout<<a<<endl;
    a*=5;
    cout<<a<<endl;
    a/=4;
    cout<<a<<endl;
    // Bitwise operators:
    cout<<"AND: "<<(a&b)<<endl;
    cout<<"OR: "<<(a|b)<<endl;
    cout<<"XOR: "<<(a^b)<<endl;
    cout<<"Left Shift: "<<(a<<1)<<endl;
    cout<<"Right Shift: "<<(a>>1)<<endl;
    
    return 0;
}
