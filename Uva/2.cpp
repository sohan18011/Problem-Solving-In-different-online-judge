#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;
#define ll long long int
ll a[1000];
int main ()
{
    ll t,n,m;
    cin>>t;
    while(t--)
    {
        ll ans=0;
        cin>>n>>m;

        string s;
        cin>>s;

        string k;
        cin>>k;

        for(ll i=0; i<n; i++)
        {

            ll p;
            p=s[i]-96;
            ll q;
            q=k[i]-48;
            if(a[p]==0)
                a[p]=q;
            else
            {
                if(a[p]<q)
                    a[p]=q;
            }
        }
        string ss;
        cin>>ss;

        for(ll i=0; i<m; i++)
        {
            ll p;
            p=ss[i]-96;
            if(a[p]==0)
            {
                //cout<<-1<<endl;
                ans=-1;
                break;
            }
            else
            {
                cout<<a[p]<< " ";
                ans=ans+a[p];
            }


        }
        cout<<ans<<endl;
        for(ll i=0;i<1000;i++)
            a[i]=0;

    }


}

