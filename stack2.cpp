// implementation of arrays using arrays
// Program to take input from user and perform operations on stack

#include<bits/stdc++.h>
using namespace std;
#define size 5

int arr[size];
int top=-1;     // define size and arrays gloablly in order to use in any function

void push(int data)
{
    if(top==size-1)
    {
        cout<<"Stack overflow "<<endl;
        return;
    }
    top++;
    arr[top]=data;
}

int pop()
{
    if(top==-1)
    {
        cout<<"Stack underflow "<<endl;
        exit(1);
    }
    int value=arr[top];
    top--;
    return value;
}

int peek()
{
    if(top==-1)
    {
        cout<<"Stack empty"<<endl;
        exit(1);
    }
    return arr[top];
}

void print()
{
    if(top==-1)
    {
        cout<<"Stack underflow "<<endl;
        return;
    }
    for(int i=top;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int data,choice;
    while(1)
    {
        cout<<"1-Push an element "<<endl;
        cout<<"2-Pop an element "<<endl;
        cout<<"3-Print the top element "<<endl;
        cout<<"4-Print all the elements "<<endl;
        cout<<"5-Quit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

    switch(choice)
    {
        case 1:
        cout<<"Enter the element to be pushed: ";
        cin>>data;
        push(data);
        break;

        case 2:
        data=pop();
        cout<<"The element removed is: "<<data<<endl;
        break;

        case 3:
        data=peek();
        cout<<"The topmost element is: "<<data<<endl;
        break;

        case 4:
        cout<<"The elements in stack are: ";
        print();
        break;

        case 5:
        exit(1);

        default:
        cout<<"INVALID CHOICE:| "<<endl;
    }
    }
    return 0;
}