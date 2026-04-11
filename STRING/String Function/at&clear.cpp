// at() : Safe Character access
//clear() : Clear Whole String

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="Hello";
    //cout<<s.at(2); //l
    //cout<<s.at(4); //o


    s.clear();
    cout<<"Length: "<<s.length(); //0
    return 0;
}
