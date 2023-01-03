//Program to print prime factors of a number in descending order using a stack

#include<bits/stdc++.h>
using namespace std;
#define size 50

int arr[size];
int top=-1;

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
    int value;
    value=arr[0];
    top--;
    return value;
}

int peek()
{
    return arr[top];
}

void prime_factors(int num)
{
    int i=2,data;
    while(num!=1)
    {
        while(num%i==0)
        {
            push(i);
            num=num/i;
        }
        i++;
    }
    cout<<"The prime factor of number in descending order are: ";
    for(int j=top;j>=0;j--)
    {
        cout<<arr[j]<<" ";
    }
    // while(top!=-1)
    // {
    //     data=pop();
    //     cout<<data<<" ";
    // }

    
}

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    prime_factors(num);
    return 0;
}