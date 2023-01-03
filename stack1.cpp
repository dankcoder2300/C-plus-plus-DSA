//implementation of stack using arrays

#include<bits/stdc++.h>
using namespace std;

# define size 5
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
        exit(1);    //abnormal termination of program
    }
    int value;
    value=arr[top];
    top--;
    return value;
}

void print_stack()
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
}

int main()
{
    int data;
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    data=pop();
    data=pop();
    print_stack();
    return 0;

}