//Program to check whether bit at position i is 0 or 1
#include<bits/stdc++.h>
using namespace std;

int getbit(int n,int pos)
{
    if((1<<pos)&n)
    return 1;
    return 0;
}

int main()
{
int n ;
cout<<"Enter the number: "<<endl;
cin>>n;
int pos;
cout<<"Enter the position u want to get the bit: "<<endl;
cin>>pos;
int ans=getbit(n,pos);
cout<<"Bit at position "<<pos<<" is: "<<ans<<endl;
return 0;
}