#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int ans=1;
    for(int i=n;i>=1;i--)
    ans=ans*i;
    
    return ans;
}

int nCr(int n,int r)
{
    int ans=fact(n)/((fact(r))*(fact(n-r)));
    return ans;
}
int main() {
    int n;
    cout<<"Enter the N:"<<endl;
    cin>>n;
    int r;
    cout<<"Enter the R:"<<endl;
    cin>>r;
    int ans=nCr(n,r);
    cout<<"nCr= "<<ans<<endl;
    

    return 0;
}