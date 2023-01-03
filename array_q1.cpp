/*Q1. Read the elements and fill the array until input is -1. Calculate length of the
array*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[20],len=0,i=-1;
cout<<"Enter the array: ";
do
{
    i++;
cin>>a[i];
} while (i<20 && a[i]!=-1);
cout<<"The length of array is: "<<i<<endl;

while(a[len]!=-1)
{
    len++;
}
cout<<"The length of array is: "<<len;

return 0;

}