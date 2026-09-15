// Pass By reference:

// #include <iostream>
// using namespace std;
// int sum(int *x, int *y) {
//     int s;
//     s = *x + *y;
//     return s;
// }

// int main() {
//     int r, a, b;
//     cin >> a >> b;
//     r = sum(&a, &b);
//     cout << "Your sum is :" << r << endl;
//     return 0;
// }

//.......................................

// Pass by Value:
// #include <iostream>
// using namespace std;
// int sum(int x, int y) {
//     int s;
//     s = x + y;
//     return s;
// }

// int main() {
//     int r, a, b;
//     cin >> a >> b;
//     r = sum(a, b);
//     cout << "Your sum is :" << r << endl;
//     return 0;
// }

//....................
//Function Overloadiing :
#include<iostream>
using namespace std;
void sum();
int sum(int ,int);
float sum(int,int,float);
int main(){
    int a,b,r1;
    float r2,c;
    cin>>a>>b>>c;
    sum();  //first function calling 
    r1=sum(a,b);
    r2=sum(a,b,c);
    cout<<"The sum is:"<<r1<<endl;
    cout<<"The sum is:"<<r2<<" ";

}
void sum(){
    int x,y,s;
    cout<<"Enter a number: "<<endl;
    cin>>x>>y;
    s=x+y;
    cout<<"The Sum is :"<<s<<endl;
}
int sum(int x,int y){
    int s=x+y;
    return s;
}
float sum(int x,int y,float z){
    float s=x+y+z;
    return (s);
}