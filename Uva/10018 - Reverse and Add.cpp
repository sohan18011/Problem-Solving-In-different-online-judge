#include<stdio.h>
int main()
{
    long long int s,i,j,n,r,ss,m,p,c,a;
    scanf("%lld",&ss);
    for(i=1; i<=ss; i++)
    {

        scanf("%lld",&n);
        c=0;
        a=n;
        for(j=1;; j++)
        {
            s=0;

            while(n>0)
            {
                s=s*10+n%10;
                n/=10;
            }

            if(a==s)
                break;
            else
            {
                n=s+a;
                a=s+a;
                c++;

            }

        }
        printf("%lld %lld\n",c,a);

    }
}
