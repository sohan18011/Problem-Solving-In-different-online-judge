#include<bits/stdc++.h>
using namespace std;
#define long long int
int main()
{
    ll i,j,n,s=0,ss=0;
    cin>>s>>n;
    ll a[n+5];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        s=s+a[i];
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<=i; j++)
        {
            ss=a[i]+a[j];
            if(ss==s)
            {
                cout<<a[i]<<" "<<[j];
            }
        }
        ss=a[i]+ss;
    }

}
