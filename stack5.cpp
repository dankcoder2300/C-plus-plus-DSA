//Program to convert decimsl to binary number usin stacks

#include<bits/stdc++.h>
using namespace std;
#define size 50

int top=-1,arr[size];

void push(int data)
{
    if(top==size-1)
    {
        cout<<"Stack overflow "<<endl;
    }
    top++;
    arr[top]=data;
}

int pop()
{
    if(top==-1)
    {
        cout<<"Stack underflow "<<endl;
    }
    int value;
    value=arr[top];
    top--;
    return value;
}

void dec_to_bin(int n)
{
while(n!=0)
{
    int i=n%2;
    push(i);
    n=n/2;
}
}

void print_stack()
{
    // for(int i=top;i>=0;i--)
    // {
    //     cout<<arr[i]<<" ";
    // }
    while(top!=-1)
    {
        cout<<pop()<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter any number to change it into binary number: ";
    cin>>n;
    dec_to_bin(n);
    print_stack();
    return 0;
}