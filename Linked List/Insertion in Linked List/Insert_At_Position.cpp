#include<iostream>
using namespace std;
class Node{
    public:
    Node* next;
    int data;
    Node(int value){
        data=value;
        next=NULL;
    }
};
void insertionAtPosition(Node*& head,int value,int position){
    Node* newNode=new Node(value);
    //Insert At Beginning:
    if(position==1){
        newNode->next=head;
        head=newNode;
        return;
    }
    Node* temp=head;
    //Reach The Node Before The Position:
    for(int i=1;i<position-1;i++){
        temp=temp->next;
    }
    //Insert New Node:
    newNode->next=temp->next;
    temp->next=newNode;
}
void printlist(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    insertionAtPosition(head,25,3);
    printlist(head);
    return 0;
}