#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,count=0;
    cin>>n;
    for(int i=0;i<=n/2;i++)
    {
        if(n==pow(2,i))
        {
        count++;
        break;
        }
    }
    if(count)
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
    return 0;
}