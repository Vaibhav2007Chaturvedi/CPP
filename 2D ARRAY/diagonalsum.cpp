// DIAGONAL SUM IN 2D ARRAY:
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i][i];//Primary Diagonal
        sum+=arr[i][n-i-1];//Secondary Diagoanl

    }
    // If n is odd,Subtract middle element once
    if(n%2==1){
        sum -=arr[n/2][n/2];
    }

    cout<<"Diagonal Sum = "<<sum;
    return 0;
}
