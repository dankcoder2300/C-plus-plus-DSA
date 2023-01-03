//Program to reverse an array
#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int size)
{
    for(int i=0;i<size/2;i++)
    {
        int temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    // }
    //alternative
    // for(int i=size-1;i>size/2;i--)                     
    // {
    //     int temp=arr[i];
    //     arr[i]=arr[size-i-1];
    //     arr[size-i-1]=temp;
    // }
    //alternative
    // int start=0;
    // int end=size-1;
    // while(start<=end)
    // {
    //     swap(arr[start],arr[end]);
    //     start++;
    //     end--;
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
    reverse(arr,n);
    print(arr,n);
    return 0;
}
