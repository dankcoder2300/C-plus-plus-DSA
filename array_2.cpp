// suppose an array of size 19 ends with end marker -1. Add an element at the end of the array.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[20],i=-1,num;
cout<<"Enter the elements of array: ";
do
{
    i++;
    cin>>arr[i];
} while (i<20&&arr[i]!=-1);

if(i==20)
{
    cout<<"\nArray does not contain end marker"<<endl;
    exit(0);
}

cout<<"The length of array is: "<<i<<endl;
cout<<"Enter the new number: "<<endl;
cin>>num;
int k=i;
arr[i]=num;
arr[i+1]=-1;
cout<<"The array after adding number is:";
i=0;
for(int i=0;i<=k+1;i++)
{
    cout<<arr[i]<<" ";
}




}