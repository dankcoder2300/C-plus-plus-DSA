#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10],size,pos,num;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    cout<<"Enter the elements of array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"The elements of array before insertion are: ";
     for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nEnter the number: "<<endl;
    cin>>num;
    cout<<"Enter the position you want to insert array: "<<endl;
    cin>>pos;

    for(int i=size;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
arr[pos-1]=num;
size++;

cout<<"The elements of array after insertion are: ";
for(int i=0;i<size;i++)
{
    cout<<arr[i]<<" ";
}

    return 0;
}

// Using Function
#include<bits/stdc++.h>
using namespace std;

void display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
    
    int indInsertion(int arr[],int size,int element,int capacity,int index)
    {
        if(size>=capacity)
        {
            return -1;
        }
        for(int i=size;i>=index;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[index]=element;
        return 1;
    }

int main()
{
    int capacity,size,element,index;
    cout<<"Enter the capacity of array: ";
    cin>>capacity;
    int arr[capacity];
    cout<<"Enter the size of array: ";
    cin>>size;
    cout<<"Enter the elements of array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"The elements of array are: ";
    display(arr,6);
    cout<<endl;
    cout<<"Enter the new element: ";
    cin>>element;
    cout<<"Enter the index: ";
    cin>>index;
    indInsertion(arr,size,element,capacity,index);
    size++;
    display(arr,size);
    return 0;
}