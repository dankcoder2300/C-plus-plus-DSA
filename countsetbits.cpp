//program to count number of set bits(1) in a two numbers
#include <bits/stdc++.h>
using namespace std;

int setbits(int n)
{
  int count=0;
  while(n!=0)
  {
      if(n&1==1)
      count++;
      n=n>>1;
  }
  return count;
}

int main()
{
   int a,b;
   cin>>a>>b;
   int ans=setbits(a)+setbits(b);
   cout<<ans<<endl;
return 0;
}