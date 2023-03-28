#include<stdio.h>
int main()
{
    int n,i,j,p=1;
    while(scanf("%d",&n)==1)
    {
        int s=1;
        j=0;
        if(n<=0)
            break;
        if(n>1)
            for(i=1; i<=n; i++)
            {
                s=s*2;
                j++;
                if(s>=n)
                    break;
            }
        if(s>=n)
        {
            printf("Case %d: %d\n",p++,j);
        }

    }
}
