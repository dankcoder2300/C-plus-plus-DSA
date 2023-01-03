//Program to subtract product and sum of digits of a number

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int i,sum=0,product=1;
    while(n!=0)
    {
        i=n%10;
        n=n/10;
        sum=sum+i;
        product=product*i;
    }
    cout<<"Result: "<<(product-sum)<<endl;
    return 0;
}