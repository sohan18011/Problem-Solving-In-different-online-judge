
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll j=0;
        for(ll i=0; i<n; i++)
        {
            if(s[i]!=s[i+1])
            {
                j=1;
                break;
            }

        }
        if(j)
        {
            cout<<"YES"<<endl;
            cout<<2<<endl;
            cout<<s[0]<<" ";
            for(ll i=1; i<n; i++)
                cout<<s[i];
                cout<<endl;
        }
        else
            cout<<"NO"<<endl;

    }}

