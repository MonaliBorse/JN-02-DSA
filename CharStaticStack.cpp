/******************************************************************************
                                    Character Static Stack 
*******************************************************************************/
#include<iostream>
#define SIZE 10
using namespace std;

class CharStack{
    int top;
    char data[SIZE];
    
    public:
     CharStack(){
        top=-1;
    }
    char push(char ele){
        if(isFull()==1)
        {
            return '0';
        }
        else{
            data[++top]=ele;
        }
    }
    char pop(){
        if(isEmpty()==1){
            return '0';
        }
        else{
            return data[top--];
        }
    }
    int isEmpty(){
        if(top==-1){
            return 1;
        }
        else{
            return 0;
        }
    }
    int isFull(){
        if(top==SIZE-1)
        {
            return 1;
        }
        else{
            return 0;
        }
    }
    char peek(){
        if(isEmpty()==1){
            return '0';
        }
        else{
            return data[top];
        }
    }
};

int main()
{
    cout<<"************Character Stack************";
    CharStack ct;
    ct.push('A');
    ct.push('B');
    ct.push('C');
    ct.push('W');
    ct.push('Q');
    ct.push('M');
    cout<<"\nStack is empty: "<<ct.isEmpty();
    cout<<"\nStack is full: "<<ct.isFull();
    cout<<"\nTop of stack is: "<<ct.peek();
    cout<<"\nThree Charactes will removed of stack: "<<ct.pop()<<" "<<ct.pop()<<" "<<ct.pop();
    cout<<"\nNow top of stack is: "<<ct.peek();
    return 0;
}
