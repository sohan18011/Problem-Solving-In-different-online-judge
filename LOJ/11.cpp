#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,k;
    cin>>n;
    ll a[n+1];
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
    }
    ll ans=1,s,cnt=1;
    sort(a,a+n);
    ll f=a[0];
    for(ll i=1; i<n; i++)
    {
        s=a[i]-f;
        if(s<=5)
        {
            cnt++;
            for(ll j=i+1; j<n; j++)
            {
                if(f==a[j])
                {
                    cnt++;
                    i++;
                    //f=a[i];
                    continue;
                }
                else
                {
                    s=a[j]-f;
                    if(s<=5)
                        cnt++;
                    else
                        break;
                }

            }
            if(cnt>ans)
            {
                ans=cnt;
                cnt=0;
            }
            cnt=0;
            f=a[i+1];
        }
    }
    if(ans<cnt)
        ans=cnt;
    cout<<ans<<endl;
    main();
}

