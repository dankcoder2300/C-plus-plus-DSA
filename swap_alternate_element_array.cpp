//Program to swap two alternate elements of array
#include<bits/stdc++.h>
using namespace std;

void Swap_alternate(int arr[],int size)
{
    int i=0;
    while(i<size-1)
    {
        swap(arr[i],arr[i+1]);
        i+=2;
    }
}
void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
}

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array: "<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    Swap_alternate(arr,n);
    print(arr,n);
    return 0;
}