#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
        a=a-b;
        else
        b=b-a;
    }
    return a;
}

int lcm(int a,int b)
{
    int ans=(a*b)/gcd(a,b);
    return ans;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int ans1=gcd(a,b);
        cout<<ans1<<" ";
        int ans2=lcm(a,b);
        cout<<ans2<<endl;
    }
    return 0;
}