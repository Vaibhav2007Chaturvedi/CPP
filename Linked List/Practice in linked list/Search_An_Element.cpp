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
int SearchElement(Node*& head,int value){
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==value){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    int value=30;
    if(SearchElement(head,value)){
        cout<<"FOUND"<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }
    return 0;
}