#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data=value;
        next=NULL;
    }
};
void insertAtEnd(Node*& head,int value){
    Node* newNode=new Node(value);
    if(head==NULL){
        head=newNode;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}
void printList(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node* head = new Node(10);

    head->next = new Node(20);
    head->next->next = new Node(30);

    insertAtEnd(head, 40);

    printList(head);

    return 0;
}