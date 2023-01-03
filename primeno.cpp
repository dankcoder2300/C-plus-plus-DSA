#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int i=2,count=0;
    while(i<n)
    {
        if(n%i==0)
        count++;
        i++;
    }
    if(count==0)
    cout<<"Prime number"<<endl;
    else
    cout<<"Not Prime number"<<endl;

    return 0;
}