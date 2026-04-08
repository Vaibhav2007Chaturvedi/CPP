// Write a program to find the product of 2 number:

// #include<iostream>
// using namespace std;
// int product(int a, int b){
//     int product=a*b;
//     return product;
// }
// int main(){
//     cout<<product(2,3);
//     return 0;
// }

// .............................................

// Write a program if a number is odd or even:

// #include<iostream>
// using namespace std;
// int number(int n){
//     if(n%2==0){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int main(){
//     cout<<number(2);
// }

// .............................
// Write a program to print factoriall of a number ,n:
#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<n<<"="<<fact<<endl;
    return fact;
}
int main(){
    factorial(0);
    factorial(1);
    factorial(2);
    factorial(3);
    factorial(4);
return 0;
}