#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t,n,i,j,s;
    double ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=floor(sqrt(n*2+.25)+.5)-1;

            cout<<ans<<endl;
    }
}
