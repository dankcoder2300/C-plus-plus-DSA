#include<bits/stdc++.h>
using namespace std;

int main()
{
int arr[4]={1,2,3,4};
int* p=arr;          // no need of writing *arr because arr is itself a pointer and points to first element
cout<<"The value of array at arr[0] is: "<<*p<<endl;
cout<<"The value of array at arr[1] is: "<<*(p+1)<<endl;
cout<<"The value of array at arr[2] is: "<<*(p+2)<<endl;
cout<<"The value of array at arr[3] is: "<<*(p+3)<<endl;
return 0;
}