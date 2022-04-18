#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};

void insertattail(node* &head,int val){
    node* n=new node(val);
    node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
   node*head=NULL;
   insertattail(head,1);
   insertattail(head,2);
   display(head);
   
   return 0;
}
