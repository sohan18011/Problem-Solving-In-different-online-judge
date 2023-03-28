#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll p[10000000];
ll pp[10000000];

int main()
{
    ll i,j;
    p[0]=0;
    pp[0]=0;
    p[0]=0;
    pp[1]=0;
    ll k=2;
    for(i=2; i<10000000; i++)
    {
        if(p[i]==0)
        {
            for(j=i+i; j<10000000; j+=i)
            {
                if(p[j]==0)
                    p[j]=i;

            }
            pp[i]=pp[i-1]+i;
        }
        else
            pp[i]=pp[i-1]+p[i];
    }
    ll n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<pp[n]<<endl;
    }
}
