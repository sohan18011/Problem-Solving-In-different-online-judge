#include<bits/stdc++.h>
using namespace std;
long long int x[1000000];
int main()
{
    long long int n,i,j,s,r,rb=0;
    for(i=2; i*i<=1000000; i++)
    {
        if(x[i]==0)
            for(j=i+i; j<=1000000; j+=i)
                x[j]=1;
    }
    while(scanf("%lld",&n)==1)
    {
        s=n;
        rb=0;
        while(n!=0)
        {
            r=n%10;
            rb=rb*10+r;
            n=n/10;
        }
        if(x[s]==0&&x[rb]==0&&rb!=s)
            printf("%lld is emirp.\n",s);
        else if(x[s]==0)
            printf("%lld is prime.\n",s);
        else
            printf("%lld is not prime.\n",s);

    }
}
