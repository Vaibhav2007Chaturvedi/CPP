// Write a program to print largest number using array:
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxarr=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>maxarr){
            maxarr=arr[i];
        }
    }
    cout<<"Largest Number: "<<maxarr;
    return 0;
}