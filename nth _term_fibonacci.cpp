//program to print nth term of fibonacci series
#include<bits/stdc++.h>
using namespace std;

int nthtermfib(int n)
{
int a=0,b=1,sum=0;;
for(int i=2;i<n;i++)
{
    sum=a+b;
    a=b;
    b=sum;
}
return sum;
}

int main()
{
    int n;
    cout<<"Enter the term:"<<endl;
    cin>>n;
    int ans=nthtermfib(n);
    cout<<"nth term of fibonacci series is: "<<ans<<endl;
    return 0;
    
}