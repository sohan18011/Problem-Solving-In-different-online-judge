#include<bits/stdc++.h>
using namespace std;
long long p[10000];
int main()
{
    long long int i,j,n,m,a=0;
    p[0]=1;
    p[1]=1;
    for(i=2; i<10000; i++)
    {
        if(p[i]==0)
        {
            for(j=i+i; j<10000; j+=i)
            {
                p[j]=1;
            }
        }
    }
    cin>>n>>m;
    if(p[n]==0&&p[m]==0)
        for(i=n+1; i<m; i++)
        {
            if(p[i]==0)
            {
                a=1;
                break;
            }
        }
    else
        a=1;
    if(a==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
