//ERASE : erase() ,, Delete Character
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s="Hello World";
//     s.erase(5,6);
//     cout<<s; //Hello
//     return 0;
// }


//..................

//Replace :replace() ,, Replace part of string 
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s="Hello World";
//     s.replace(6,5,"C++");
//     cout<<s; //Hello C++
//     return 0;
// }

//....................

//Empty: empty() ,, Checks if string is empty.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    if(s.empty()){
        cout<<"String is empty"<<endl;
    }
    else{
        cout<<"String is not empty"<<endl;
    }
    return 0;
}