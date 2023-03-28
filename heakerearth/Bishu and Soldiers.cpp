#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,m;
    cin>>n;
   ll a[n+5];
   ll s,i;

   for(i=0;i<n;i++)
   {
       cin>>a[i];
      // s[i]+=a[i];
   }
   cin>>m;
   sort(a,a+n);
   while(m--)
   {
       ll p,s=0,ans=0;
       cin>>p;
       for(i=0;i<n;i++)
       {
           if(a[i]<=p)
           {
               ans++;
               s=s+a[i];
           }
           else
            break;
       }
       cout<<ans<<" "<<s<<endl;
   }

}
