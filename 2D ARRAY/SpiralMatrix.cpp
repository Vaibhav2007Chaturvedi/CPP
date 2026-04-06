// Spiral Matrix In 2D-Array:

#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter the row: "<<endl;
    cin>>row;
    cout<<"Enter the column: "<<endl;
    cin>>col;

    int arr[100][100];

    // Input Array:
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    int top=0,bottom=row-1;
    int left=0,right=col-1;
    while(top<=bottom && left<=right){

        // 1.Left -> Right:
        for(int i=left;i<=right;i++){
            cout<<arr[top][i]<<" ";
        }
        top++;

        // 2.Top -> Bottom:
        for(int i=top;i<=bottom;i++){
            cout<<arr[i][right]<<" ";
        }
        right--;

        // 3.Right -> Left:
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                cout<<arr[bottom][i]<<" ";
            }
            bottom--;
        }

        // 4.Bottom -> Top:
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                cout<<arr[i][left]<<" ";
            }
            left++;
        }
    }
    return 0;
}