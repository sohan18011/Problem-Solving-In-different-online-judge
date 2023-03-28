#include<bits/stdc++.h>
using namespace std;
#define sf(x) scanf("%lld",&x)
long long int p[100002];
int main()
{
    long long  int n,i,j,m,f=1,s=0,l=1;
    for(i=0;i<45;i++)
    {
        p[i]=s;
        s=l+f;
        f=l;
        l=s;
    }

    cin>>n;
//    n=pow(i,j);
//    m=pow(j,i);
    cout<<p[n]-1<<endl;
}

