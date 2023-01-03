#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements of array: ";
    cin>>n;
    int arr[n];
    int *ptr=arr;

    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++)
    {
    //    cin>>(ptr+i);

    }
    cout<<"The elements of array are: ";
    for(int i=0;i<n;i++){
        cout<<*(ptr+i);
    } 
}