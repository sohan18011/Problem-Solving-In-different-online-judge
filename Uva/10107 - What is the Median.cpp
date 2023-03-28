#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll a,b,j=0;
    vector<ll>v;
    while(cin>>a)
    {

        v.push_back(a);
        //cout<<v[v.size()]<<endl;
        if(j==0)
        {
            cout<<a<<endl;
            j=1;
            continue;
        }
        sort(v.begin(),v.end());
        if(v.size()%2==1)
            cout<<v[(v.size()+1)/2-1]<<endl;
        else
            cout<<((v[(v.size()+1)/2-1]+v[(v.size()+1)/2])/2)<<endl;
        // cout<<a*b-1<<endl;
        //cout<<v.size()<<" ";
        //cout<<v.size()/2-1<<" " <<v.size()/2<<endl;

    }
}
