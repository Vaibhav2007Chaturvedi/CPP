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
int minimunlinked(Node*& head){
    int mini=head->data;
    Node* temp=head->next;
    while(temp!=NULL){
        if(temp->data<mini){
            mini=temp->data;
        }
        temp=temp->next;
    }
    return mini;
}
int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    cout<<minimunlinked(head)<<endl;
    return 0;
}