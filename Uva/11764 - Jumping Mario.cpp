#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,s,x[100],p,y,z,j,b;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        y=0;
        z=0;
        scanf("%d",&s);
        for(j=0; j<s; j++)
        {
            scanf("%d",&x[j]);
        }
        for(j=1; j<s; j++)
        {
            if(x[j-1]<x[j])
            {
                y++;
            }
            else if(x[j-1]>x[j])
            {
                z++;
            }
            else
                b++;

        }
        printf("Case %d: %d %d\n",i,y,z);

    }
}
