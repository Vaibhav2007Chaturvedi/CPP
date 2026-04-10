// String : A string is a sequence of characters. 
// In c++ ,string is an object of string class (from <string> library).

// Basic String Input & Output 
#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    cout<<"Enter your name: ";
    getline(cin,name);
    cout<<"Your name is: "<<name<<endl;
    return 0;
}
