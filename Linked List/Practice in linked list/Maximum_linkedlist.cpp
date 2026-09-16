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
int maximumlinked(Node*& head){
    int maxi=head->data;
    Node* temp=head->next;
    while(temp!=NULL){
        if(temp->data>maxi){
            maxi=temp->data;
        }
        temp=temp->next;
    }
    return maxi;
}
int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    cout<<maximumlinked(head)<<endl;
    return 0;

}