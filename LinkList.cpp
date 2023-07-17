/* Impelentation of Link List. */

#include<iostream>
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
void insertAtTell(node* &head, int val){

    node* n=new node(val);

    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void insertAtHead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    cout<<"\n***************Link List***************\n\n";
    node* head=NULL;
    insertAtTell(head,2);
    insertAtTell(head,4);
    insertAtTell(head,5);
    display(head);
    insertAtHead(head,8);
    display(head);
    return 0;
}
