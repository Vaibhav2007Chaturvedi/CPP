//  push_back() & pop_back():  ADD/REMOVE CHARACTER.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="Hello";

    // s.push_back('o'); //add
    // cout<<s; //Helloo


    s.pop_back(); //remove
    cout<<s;//Hell
    return 0;
}