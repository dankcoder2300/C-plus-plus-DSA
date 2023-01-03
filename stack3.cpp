//implementation of arrays
//Program to implement a stack in array arr[] using arr[0] as top element

#include<bits/stdc++.h>
using namespace std;

#define size 5
int arr[size];
int first=-1;   // define size and arrays gloablly in order to use in any function

void push(int data)
{
    first++;
    for(int i=first;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=data;
}
int pop()
{
    int value;
    value=arr[0];
    for(int i=0;i<first;i++)
    {
        arr[i]=arr[i+1];
    }
    first--;
    return value;
}
void print()
{
    if(first==-1)
    {
        cout<<"Stack underflow "<<endl;
        exit(1);
    }
    cout<<"The elements in stack are: ";
    for(int i=0;i<=first;i++)
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
    print();

    return 0;
}