#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x[1000],y,s,ss,z,zz,i,j;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        z=0;
        s=0;
        for(j=0; j<n; j++)
        {

            scanf("%d",&x[i]);
            s=s+x[i]/30+1;
            z=z+x[i]/60+1;
        }
        ss=s*10;
        zz=z*15;
        if(ss==zz)
            printf("Case %d: Mile Juice %d\n",i,ss);
        else if(ss<zz)
            printf("Case %d: Mile %d\n",i,ss);
        else
            printf("Case %d: Juice %d\n",i,zz);
    }
}
