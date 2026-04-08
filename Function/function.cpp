// Function: Block of code which runs when it is called.

// #include<iostream>
// using namespace std;
// void helloprint(){
//     cout<<"Hello"<<endl;
// }
// int main(){
//     helloprint();
//     return 0;
// }

// ..............................................
// Function Parameter:
 
#include<iostream>
using namespace std;
// int sum(int a, int b){
//     int sum=a+b;
//     return sum;
// }
int sum(int a, int b=1){
    int sum=a+b;
    return sum;
}
int main(){
    // int s= sum(2,3);
    // int s= sum(2);
     int s= sum(2,3);
    cout<<s<<endl;
    return 0;
}


