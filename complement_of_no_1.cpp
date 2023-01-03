#include <bits/stdc++.h>
using namespace std;

int complement(int n)
{
    int m=n;
    int mask=0;
    while(m!=0)
    {
        mask=(mask<<1)|1;
        m=m>>1;
    }
    int ans=(~n)&mask;
    return ans;
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int ans=complement(n);
    cout<<"Complement of number: "<<ans<<endl;
   
    return 0;
}