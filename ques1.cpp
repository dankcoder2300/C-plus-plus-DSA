/*Given an array of integers named, of size and a target integer . Write a
program to print the indices of the two numbers such that they add up to target . You
may assume that each input would have exactly one solution, and you cannot use the
same element twice. If no such pair exits then print */

#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,target,i,k,sum=0;
cout<<"Enter the size of array: ";
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
cout<<"The array is: ";
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";

}
cout<<"Enter the target: ";
cin>>target;

for(int i=0;i<n;i++)
{
    for(int k=i+1;k<n;k++)
    {
sum=arr[i]+arr[k];
    }
}
}
