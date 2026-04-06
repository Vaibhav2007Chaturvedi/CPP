// Sorting:
//      sorting means arrange data in a specific order.Usually the order s accending or descending .
// Selection Sort:
//          Selection Sort is a method of sorting in which the smallest element is selected from the unsorted 
//          part and placed at the correct position in each step.
// PROGRAM OF SELECTION SORT:
#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int n=sizeof(arr)/sizeof(int);
    cout<<"Enter 5 integer"<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        // SWAP
        int temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

