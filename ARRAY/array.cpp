// ARRAY: An array is a collection of element that store element of same data type,in contiguous memory location.
// Input And Output of an Array:

#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    // Output
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
