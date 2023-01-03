#include <bits/stdc++.h>
using namespace std;

int power(int n,int p)
{
    int ans=1;
    for(int i=1;i<=p;i++)
    ans=ans*n;
    
    return ans;
}
int main() {
    int n,p,ans;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    cout<<"Enter the power:"<<endl;
    cin>>p;
    // ans=power(n,p);
    // cout<<ans<<endl;
    cout<<power(n,p)<<endl;

    return 0;
}