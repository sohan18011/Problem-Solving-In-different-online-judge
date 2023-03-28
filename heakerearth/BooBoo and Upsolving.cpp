#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,m,q;
    cin>>n>>m;
    ll i,a[n+4];
    set<ll> st;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        st.insert(a[i]);
    }
    cout<<st.size()<<endl;

}

