#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j=0,n,k;
    scanf("%d",&n);

    for(i=2; i<=n; i++)
    {
        for(k=2; k<=i/2; k++)
            if(i%k==0)
            {
                j=1;
                break;
            }

    }
    if(j!=0&&n==1)
    {
        printf(" not prime");
        break;
    }
    else
    {
        while(x>0)
        {
            sum=sum*10+x%10;
            x=x/10;
        }
        for(i=2; i<=sum; i++)
        {
            for(k=2; k<=i/2; k++)
                if(sum%k==0)
                {
                    j=1;
                    break;
                }

        }

    }
}

}

