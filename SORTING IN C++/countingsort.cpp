// Counting sort is a sorting technique that sorts element by counting the frequency of each element and using this information to place element in sorted order.
#include<iostream>
using namespace std;

int main(){
    int arr[10];
    int n = 10;
    
    
    cout << "Enter " << n << " array elements: " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int maxvalue = arr[0];
    for(int i = 1; i < n; i++){ 
        if(arr[i] > maxvalue){
            maxvalue = arr[i]; 
        }
    }
    
    
    int count[maxvalue + 1] = {0};
    for(int i = 0; i < n; i++){
        count[arr[i]]++;
    }
    
    
    cout << "Sorted array: " << endl;
    for(int i = 0; i <= maxvalue; i++){ 
        while(count[i] > 0){
            cout << i << " ";
            count[i]--;
        }
    }
    
    cout << endl;
    return 0;
}