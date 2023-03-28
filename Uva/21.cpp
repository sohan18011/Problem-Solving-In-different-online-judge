#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
ll
int main()
{
    ll i,j,k,t,a[1010];
    vector<ll>v;
    while(cin>>t)
    {
        if(t==0)
            break;
        memset(a,0,sizeof(a));
        v.clear();
        for(i=0; i<t; i++)
        {
            cin>>k;
            v.pb(k);
        }
        stack<ll>st;
        ll x=1;
        ll id=1;
        for(i=0; i<t; i++)
        {
            if(v[i]==x)
            {
                a[id++]=v[i];
                x++;
            }
            else
            {
                st.push(v[i]);
            }
            while(!st.empty()&&st.top()==x)
            {
                a[id++]=st.top();
                st.pop();
                x++;
            }
        }
        while(!st.empty())
        {
            a[id++]=st.top();
            st.pop();
        }
        ll f=1;
        for(i=1; i<=t; i++)
        {
            if(i!=a[i])
            {
                cout<<"no"<<endl;
                f=0;
                break;
            }
        }
        if(f)
            cout<<"yes"<<endl;
    }
}
