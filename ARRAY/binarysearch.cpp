// BINARY SEARCH:
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int start=0,end=n-1;
    int index=-1;
    while(start<=end){
        int mid=start +(end-start)/2;
        if(arr[mid]==key){
            index=mid;
            break;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    if(index!=-1){
        cout<<"Element found: "<<index;
    }
    else{
        cout<<"Element not found";
    }
    return 0;
}