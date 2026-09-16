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
int printList(Node* head){
    int count=0;
    Node* temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    cout<<printList(head)<<endl;
}