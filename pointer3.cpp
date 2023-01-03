#include<bits/stdc++.h>
using namespace std;
int main()
{
int var=23;
int *ptr=&var;
int **pptr=&ptr;

cout<<"The value of var is: "<<var<<endl;
cout<<"The address of var is: "<<&var<<endl;
cout<<"The address of var is: "<<ptr<<endl;
cout<<"The value of var is: "<<*ptr<<endl;
cout<<"The address of ptr is: "<<pptr<<endl;
cout<<"The value of ptr is : "<<*pptr<<endl;
cout<<"The value of var is "<<**pptr<<endl;


return 0;
    
}