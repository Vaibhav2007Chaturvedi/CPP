// STRING CONCATENATION :

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s1,s2;
//     cout<<"Enter your first string:  "<<endl;
//     cout<<"Enter your second string:  "<<endl;
//     cin>>s1>>s2;
//     string result=s1+" "+s2;
//     cout<<result;
//     return 0;
// }

// ............................................>
// String Length:
// #include<string>
// #include<iostream>
// using namespace std;
// int main(){
//     string s="programming";
//     cout<<"Length: "<<s.length();
//     return 0;
// }

// ...................................>

// Access Character:
// #include<string>
// #include<iostream>
// using namespace std;
// int main(){
//     string s="Hello";
//     cout<<"First Character: "<<s[0]<<endl;
//     cout<<"Secon Character: "<<s[1]<<endl;
//     return 0;
// }

// .....................................>

// Loop Through String:
#include<string>
#include<iostream>
using namespace std;
int main(){
    string s="Hello";
    for(int i=0;i<s.length();i++){
        cout<<s[i]<<" ";
    }
    return 0;
}