#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x[1000],j,sum,i;
    scanf("%d",&t);
    for( i=1; i<=t; i++)
    {
        scanf("%d",&n);
        for( j=0; j<n; j++)
        {
            scanf("%d",&x[j]);
        }
        sort(x,x+n);
        sum=(x[n-1]-x[0])+x[n-1]-x[0];
        printf("%d\n",sum);

    }
}

