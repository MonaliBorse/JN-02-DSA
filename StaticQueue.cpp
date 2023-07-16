/*Impementation of static queue*/

#include<iostream>
#define SIZE 3
using namespace std;

class StatQueue{
    int data[SIZE];
    int front,rear;
    public:
     StatQueue(){
        front=rear=-1;
    }
    void insert(int ele){
        if(isFull()==1){
            cout<<"Queue is Full....";
        }
        else{
            data[++rear]=ele;
            if(front==-1){
                front=0;
            }
        }
    }
    int remove(){
        if(isEmpty()==1){
            return 0;
        }
        else{
            return data[front++];
        }
    }
    int isEmpty(){
        if(rear==front==-1 || front>rear){
            return 1;
        }
        else{
            return 0;
        }
    }
    int isFull(){
        if(rear==SIZE-1){
            cout<<"Queue is Full.....";
            return 1;
        }
        else{
            return 0;
        }
    }
      int peek(){
        if(isEmpty()==1){
            return 0;
        }
        else{
            return data[front];
        }
    }
};
int main()
{
    cout<<"***************Implementation of Static QUEUE***************";
    StatQueue sq;
    sq.insert(20);
    sq.insert(10);
    sq.insert(30);
    cout<<"\n\nQueue is Full: "<<sq.isFull();
    cout<<"\nQueue is Empty: "<<sq.isEmpty();
    cout<<"\nElement in Queue: "<<sq.peek();
    cout<<"\nRemove element in Queue: "<<sq.remove();;
    cout<<"\nElement in Queue: "<<sq.peek();
    
    return 0;
}
