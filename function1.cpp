#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    int i,temp=1;
    for(int i=1;i<=n;i++)
    {
        temp=temp*i;
    }
    return temp;
}

int main()
{
    int i,f;
    for(int i=1;i<=5;i++)
    {
        f=fact(i);
        cout<<"factorial "<<i<<":= "<<f<<endl;

    }
    return 0;
}
