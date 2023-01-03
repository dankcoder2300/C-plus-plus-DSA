#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10],size,pos;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    cout<<"Enter the elements of array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"The elements of array before deletition are: ";
     for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nEnter the position you want to delete element: "<<endl;
    cin>>pos;

    for(int i=pos-1;i<size-1;i++)
    {
        arr[i]=arr[i+1];
    }
    size--;

    cout<<"The elements of array after deletition are: ";
for(int i=0;i<size;i++)
{
    cout<<arr[i]<<" ";
}
return  0;
}
