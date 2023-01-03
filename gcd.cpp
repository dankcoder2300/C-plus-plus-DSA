//Program to Calculate GCD of two numbers
#include<bits/stdc++.h>
using namespace std;

int gcd(int n1,int n2)
{
    //using while loop
    // while(n1!=n2)
    // {
    //     if(n1>n2)
    //     n1-=n2;
    //     else
    //     n2-=n1;
    // }
    // return n1;

    //using for loop
    // swapping variable n1 and n2 if n2 is greater than n1
    if(n2>n1)
    swap(n1,n2);
    int hcf;
    for(int i=2;i<=n2;i++)
    {
        if(n1%i==0&&n2%i==0)
        hcf=i;

    }
    return hcf;
}

int main()
{
    int n1,n2;
    cout<<"Enter the first number: "<<endl;
    cin>>n1;
    cout<<"Enter the second number: "<<endl;
    cin>>n2;
    int ans=gcd(n1,n2);
    cout<<"GCD of "<<n1<<" and "<<n2<<" is: "<<ans<<endl;
    return 0;
}