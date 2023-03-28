#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,s,x[3000],j,y;
    while(scanf("%d",&n)==1)
    {
        for(i=1; i<=n; i++)
        {
            s=0;
            scanf("%d",&y);
            for(j=0; j<y; j++)
            {
                scanf("%d",&x[j]);
            }
            sort(x,x+j);
            for(j=0; j<y-1; j++)
            {
                s=s+abs((x[j]-x[j+1]));
            }
            printf("%d\n",s);
        }
    }
}
