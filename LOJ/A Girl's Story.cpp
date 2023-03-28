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
        if(n==2)
        {
            if(s[0]<s[1])
            {
                cout<<"YES"<<endl;
                cout<<2<<endl;
                cout<<s[0]<<" "<<s[1]<<endl;
            }
            else
                cout<<"NO"<<endl;
            continue;
        }


        cout<<"YES"<<endl;
        cout<<2<<endl;
        cout<<s[0]<<" ";
        for(ll i=1; i<n; i++)
            cout<<s[i];
        cout<<endl;

    }
}
