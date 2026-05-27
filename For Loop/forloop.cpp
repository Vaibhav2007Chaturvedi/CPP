// For Loop : A for loop runs code again and again until a given condition becomes false.
// or A for loop is used when you know how many times you want to repeat somethings.
//................
// WAP using for loop to print a to z.
// #include<iostream>
// using namespace std;
// int main(){
//     char name;
//     for(name='a';name<='z';name++){
//         cout<<name<<" ";
//     }
//     return 0;
// }
// output:a b c d e f g h i j k l m n o p q r s t u v w x y z 
// ...........................

// WAP to calculate power of a number:
#include<iostream>
using namespace std;
int main(){
    int n,pow,i,num;
    cout<<"Enter a number";
    cin>>n;
    cout<<"Enter the power";
    cin>>pow;
    num=n;
    for(i=1;i<pow;i++){
        num=num*n;
    }
    cout<<num<<endl;
}