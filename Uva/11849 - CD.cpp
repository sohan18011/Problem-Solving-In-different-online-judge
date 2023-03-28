#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,m;
    while(1)
    {
        cin>>n>>m;
        ll a[n+5],b[m+5],i,j,ans=0;
        if(m==0&&n==0)
            break;
        for(i=1; i<=n; i++)
            cin>>a[i];
        for(i=1; i<=m; i++)
            cin>>b[i];
        i=1;
        j=1;
        //i=0;
//        if(n>m)
//        {
//            for(i=0; i<m; i++)
//            {
//                for(j=0; j<n; j++)
//                    if(a[j]==b[i])
//                        ans++;
//            }
//        }
//        else
//            for(i=0; i<n; i++)
//            {
//                for(j=0; j<m; j++)
//                    if(a[i]==b[j])
//                        ans++;
//            }

        while (i<=n && j<=m)
        {
            while (j<=m && b[j]<a[i])
                j++;
            if (j>m)
            break;
            if (a[i]==b[j])
            {
                ans++;
                j++;
            }
            i++;
        }
        cout<<ans<<endl;

    }

}
