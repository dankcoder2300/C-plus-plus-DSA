//Program to find maximum and minimum element in an array
#include<bits/stdc++.h>
using namespace std;

int maxi(int arr[],int size)
{
    int max=arr[0];
    for(int i=0;i<size;i++)
    {
    if(arr[i]>=max)
    max=arr[i];
    }
    return max;
}
int mini(int arr[],int size)
{
    int min=arr[0];
    for(int i=0;i<size;i++)
    {
    if(arr[i]<=min)
    min=arr[i];
    }
    return min;
}

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int max=maxi(arr,n);
    cout<<"Maximum element in array is: "<<max<<endl;
    int min=mini(arr,n);
    cout<<"Minimum element in array is: "<<min<<endl;
    return 0;
}