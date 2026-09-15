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
void deletefromBeginning(Node*& head){
    if(head==NULL){
        return;
    }
    Node* temp=head;
    head=head->next;
    delete temp;
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
    deletefromBeginning(head);
    printlist(head);
    return 0;
}