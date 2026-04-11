// INSERT STRING :  insert()  ,, inserts string at position.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="Hello";
    s.insert(5,"World");
    cout<<s;  //HelloWorld
    return 0;
}