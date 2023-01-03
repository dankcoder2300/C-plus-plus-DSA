// suppose an array of size 9 ends with end marker -1. Add an element at the ith index of the array.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10],i=-1,num,pos;
    cout<<"Enter the elements of array: "<<endl;
    do
    {
        i++;
        cin>>arr[i];
    } while (i<10 && arr[i]!=-1);
    
    cout<<"The length of array is: "<<i<<endl;
cout<<"Enter the new number:"<<endl;
cin>>num;
cout<<"Enter the position:"<<endl;
cin>>pos;
for(int k=i;k>=pos;k--)
{
    arr[k+1]=arr[k];
}
cout<<"Array after insertion is:";
for(int k=0;k<i+1;k++)

{
    cout<<arr[k]<<" ";
}
return 0;
}