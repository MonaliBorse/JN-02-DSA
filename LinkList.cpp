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

int/*bool*/ search(node* head, int key){ //We can't use void becz the conversion void to unsign int is not possible.
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            cout<<"True";
            return 1;/*return true;*/
            
        }
        temp=temp->next;
    }
    return 0;/*retune flase;*/
}
void deleteAtHead(node* &head){
   // if(head->next==NULL){deleteAtHead(head);cout<<"Node deleted";}
    node* toDelete=head;
    head=head->next;
    delete toDelete;
}

void deletion(node* &head, int val){
    if(head==NULL){cout<<"No node present.";}
    if(head->next==NULL){deleteAtHead(head);return;}
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* toDelete=temp->next;
    temp->next=temp->next->next;
    delete toDelete;
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
    cout<<"\n***************Impelentation of Link List***************\n\n";
    node* head=NULL;
    insertAtTell(head,2);
    insertAtTell(head,4);
    insertAtTell(head,5);
    display(head);
    insertAtHead(head,8);
    display(head);
    //search(head,2);/*cout search(head,4);*/
    //deletion(head,2);
   deleteAtHead(head);
   display(head);
    return 0;
}
