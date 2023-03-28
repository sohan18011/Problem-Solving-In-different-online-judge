#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll i,j,n,s=0,ss=0,p=0;
    cin>>s>>n;
    ll a[n+5];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        // s=s+a[i];
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<=i; j++)
        {
            if(i==j)
                continue;
            //cout<<s<<endl;
            ss=a[i]+a[j];
            if(s==ss)
            {
                cout<<a[i]<<" "<<a[j];
                p=1;
                break;
            }
        }
        if(p==1)
            break;
        ss=a[i]+ss;
    }
    main();
}
