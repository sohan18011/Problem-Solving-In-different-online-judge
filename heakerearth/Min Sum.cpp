
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,p;
    scanf("%lld",&n);
    vector<long long int>v;
   long long a[n+5],s=0;
    for(long long int i=0; i<n; i++)
    {
            scanf("%lld",&p);
        v.push_back(p);
    }
    sort(v.begin(),v.end());
    //int j=1;
    for(long long int i=1; i<=n; i++)
    {
        s=s+v[i-1];
        a[i]=s;
        //j++;
    }



    long long int q,m;
    cin>>q;
    vector< long long int>::iterator l;
    while(q--)
    {
    scanf("%lld",&m);
        l=lower_bound(v.begin(),v.end(),m);

        cout<<a[(l-v.begin())]<<endl;

    }

}
