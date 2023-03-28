#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,r;
    for(;;)
    {
        scanf("%lld",&n);
        if(n==0)
            break;
        r=sqrt(n);
        if(r*r==n)
            printf("yes\n");
        else
            printf("no\n");
    }

}
