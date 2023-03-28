#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int f=0,n=1,s[10000],t,i;
    for(i=1; i<10000; i++)
    {
        s[i]=f+n;
        f=n;
          n=s[i];
    }
    while(cin>>t)
    {
        if(t==0)
            break;
        cout<<s[t]<<endl;
    }
}
