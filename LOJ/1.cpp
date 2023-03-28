#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,m,i;
    cin>>n>>m;
    ll a[n+5];
    // map<char,ll>mp;
    for( i=0; i<n; i++)
    {
        // ll a;

        cin>>a[i];
    }
    string s;
    cin>>s;
    ll ans=0,j;
    vector<ll>v;
    for(i=0; i<n; i++)
    {

        char c=s[i];
        v.push_back(a[i]);
        i++;
        while(c==s[i])
        {
            v.push_back(a[i]);
            i++;
        }
        i--;
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        for(ll k=0; k<v.size(); k++)
        {
            if(k<m)
            {
                //cout<<s[i]<<" ";
                ans+=v[k];
               // cout<<v[k]<<" ";

            }
        }
        v.clear();
    }
    //cout<<endl;
    cout<<ans<<endl;
   // main();

}
