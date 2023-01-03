#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int count=0;
    getline(cin,s);
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='a')
        {
            count++;
        }
    }
    int k=n-count;
    if(count>k)
    cout<<s<<endl;
    else{
        while(count>k)
        {
            s.erase(s.size()-1);
        }
        cout<<s<<endl;
    }
    
    return 0;
}


