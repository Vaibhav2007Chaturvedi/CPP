// SCOPE: Scope means the region or area of a program where a variable or function can be accessed (used).

// Types of Scope:
// 1. LOCAL SCOPE: variables declared inside a function or block{} . And can be used only inside that block.

// #include<iostream>
// using namespace std;
// int main(){
//     int x=10; // Local Variable
//     cout<<x;
//     return 0;
// }

// .............................

// 2. Global Scope: Variable declared outside all function. Can be accessed from anywhere in the program.
// #include<iostream>
// using namespace std;
// int x=10; //Global Variable
// int main(){
//     cout<<x;
// }

// ................................

// 3. Block Scope: Variable declared inside a block {} (like if,loop). Accessible only inside that block.
// #include<iostream>
// using namespace std;
// int main(){
//     if(true){
//         int y=5;  //Block Scope
//         cout<<y;
//     }
//     //cout<<y;  ERROR(outside block)
// }


// ....................................
// 4.Function Scope: Labels (used in goto) have function scope. Mostle not used much in modern C++.

// .....................................

// SCOPE RESOLUTION OPERATOR :: 

//used to access global variable when local variables has same name.

#include<iostream>
using namespace std;
int x=100; //Global
int main(){
    int x=50; //Local

    cout<<x<<endl;  //50
    cout<<::x<<endl; //100
}
