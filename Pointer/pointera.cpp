// Pointer : A pointer is a variable that stores the memory address of another variable 

#include<iostream>
using namespace std;
int main(){
    int a=10;
    cout<<&a<<endl;
    int *ptr=&a;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
}