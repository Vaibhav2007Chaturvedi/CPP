// Linked List: A linked List is a linear data structure where element (called nodes) are connected using links(pointer).
// Each nodes contains:data(key) & Pointer(next).
// .............................
// Insertion Start:
// Code:
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data=value;
        next=NULL;
    }
};
int main(){
    Node *Head;
    Head=NULL;
    int arr[]={2,4,6,8,10};
    // Insert The Node at Beginning
    for(int i=0;i<5;i++){
        // Linked List does not exist
        if(Head==NULL){
            Head=new Node(arr[i]);
        } 
        // Linked List Exist
        else{
            Node *temp;
            temp=new Node(arr[i]);
            temp->next=Head;
            Head=temp;
        }
    }
    // Print The Value
    Node *temp=Head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    };
}

