// Suppose an array of size 9 ends with end marker -1. Search an element from the array.

#include<bits/stdc++.h>
using namespace std;
int main()
{

int a[10]={2,3,78,65,78,21,75,87,54,-1},i=0,num,flag;
cout<<"Enter the element to be searched in array: ";
cin>>num;

    while(i<10 && a[i]!=-1)
    {
        if(a[i]==num)
    
        {
            cout<<num<<"is found at " <<i<<" postion"<<endl;
        flag=1;
        break;
        }
        
        i++;
    }
    if(flag==0)
    {
        cout<<num<<" is not found in array"<<endl;
    }

return 0;
}


