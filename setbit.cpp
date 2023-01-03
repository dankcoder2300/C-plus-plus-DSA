//Program to set bit(make bit 1) at position i
#include<bits/stdc++.h>
using namespace std;

int setbit(int n,int pos)
{
    return (1<<pos)|n;
}

int main()
{
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    int pos;
    cout<<"Enter the position: "<<endl;
    cin>>pos;
    int ans=setbit(n,pos);
    cout<<"Number after set bit is: "<<ans;
    return 0;
}