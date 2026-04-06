// BUBBLE SORT : Bubble sort is a method of sorting adjacement elements are compared and swapped if 
//           they are in the wrong order, and this process is repeated until the array is sorted.
// PROGRAM:

#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int n=sizeof(arr)/sizeof(int);
    cout<<"Enter a array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                // SWAP
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}