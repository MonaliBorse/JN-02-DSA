/******************************************************************************
                                    Static Stack
*******************************************************************************/

#include<iostream>
#define SIZE 20
using namespace std;

class Stack
{
    int data[SIZE];
    int top;

    public:
     Stack()
    {
        top=-1;
    }
    int push(int ele)
    {
        if(isFull()==1) 
        {
            return -1;
        }
        else
        {
           return data[++top]=ele;
        }      
    }
    int pop()
    {
        if(isEmpty()==1)
        {
            return -1;
        }
        else
        {
            return data[top--];
        }
    }

    int isFull()
    {
        if(top==SIZE-1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int isEmpty()
    {
        if(top==-1)
        {
            return 1;
        }
        else{
            return 0;
        }
    }
    int peek()
    {
        if(isEmpty()==1)
        {
            return 0;
        }
        else
        {
            return data[top];
        }
    }

};

int main()
{
    cout<<"*******************STATIC STACK IS*******************";
    Stack st;
    st.push(10);
    st.push(20);
    st.push(40);
    st.push(30);
    st.push(60);
    st.push(80);
    cout<<"\nStack is empty: "<<st.isEmpty();
    cout<<"\nStack is full: "<<st.isFull();
    cout<<"\nTop of stack is: "<<st.peek();
    cout<<"\nRemove top of stack: "<<st.pop();
    cout<<"\nNow top of stack is: "<<st.peek();
    return 0;
}
