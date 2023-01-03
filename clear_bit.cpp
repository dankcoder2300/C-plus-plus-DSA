#include<bits/stdc++.h>
using namespace std;

int clearbit(int n,int pos)
{
    // return (1<<pos)^n;
    return (~(1<<pos))&n;
}

int main()
{
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    int pos;
    cout<<"Enter the position of bit to clear: "<<endl;
    cin>>pos;
    int ans=clearbit(n,pos);
    cout<<"Number after clearing bit at position "<<pos<<" is: "<<ans;
    return 0;
}