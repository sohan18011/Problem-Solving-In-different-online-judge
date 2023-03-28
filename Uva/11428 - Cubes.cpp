#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,l,n,m,c,x,p;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        m=n;
        p=sqrt(m);
        for(i=1; i<=p; i++)
        {
            c=0;
            for(j=0; j<=i-1; j++)
            {
                x=(i*i*i)-(j*j*j);
                if(x==n)
                {
                    c=1;
                    break;
                }
            }
            if(c==1)
                break;
        }
        if(c==1)
            printf("%d %d\n",i,j);
        else
            printf("No solution\n");
    }

    return 0;
}
