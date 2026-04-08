// MORE EXAMPLE OF SCOPE:

// 1.Local vs Global Scope:
// #include<iostream>
// using namespace std;
// int a=100; //Global
// void fun(){
//     int a=50; //Local
//     cout<<"INSIDE FUN(): "<<a<<endl;
// }
// int main(){
//     fun();
//     cout<<"INSIDE MAIN(): "<<a<<endl;
//     return 0;
// }
// OUTPUT :INSIDE FUN(): 50
//         INSIDE MAIN(): 100

// .................................................

// Nested Block:
// #include<iostream>
// using namespace std;
// int main(){
//     int x=1;
//     {
//         int x=2;
//         {
//             int x=3;
//             cout<<x<<endl; //3
//         }
//         cout<<x<<endl; //2
//     }
//     cout<<x<<endl; //1
//     return 0;
// } 
// NOTE: INNER BLOCK OVERRIDES OUTER VARIABLES.

// ..............................

// imp:

#include<iostream>
using namespace std;
int x=5;
int main(){
    int x=10;
     {
         cout<<x<<endl; //10
     }
    // cout<<x<<endl; //10
}