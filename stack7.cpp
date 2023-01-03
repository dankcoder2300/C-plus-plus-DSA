//Program to reverse original stack using two temporary stack using arrays

#include<bits/stdc++.h>
using namespace std;
#define size 10

int push(int arr[size],int data,int top)
{
    if(top==size-1)
    {
        cout<<"Stack overflow "<<endl;
        exit(0);
    }
    top++;
    arr[top]=data;
    return top;

}
int pop(int arr[size],int top)
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

void print_stack(int arr[size],int top)
{
for(int i=top;i>=0;i--)
{
    cout<<arr[i]<<" ";
}
}
int main()
{
    int arr[size],arr1[size],arr2[size];
    int top0=-1,top1=-1,top2=-1;
    int n,data;
    cout<<"Enter the number of elements: ";
    cin>>n;
    while(n--)
    {
        cout<<"Enter the data: ";
        cin>>data;
        top0=push(arr,data,top0);
    }
    cout<<"The elements in original stack are: ";
    print_stack(arr,top0);
    return 0;
}