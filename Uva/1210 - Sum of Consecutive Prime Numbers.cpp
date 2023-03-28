#include<bits/stdc++.h>
using namespace std;
int prime[10005];
int main()
{
    int i,n,j,sum,p,s;
    prime[0]=1;
    prime[1]=1;
    for(i=2; i*i<=10000; i++)
    {
        if(prime[i]==0)
        {
            for(j=i+i; j<=10000; j+=i)
                prime[j]=1;
        }
    }
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        p=0;

        for(i=2; i<=n; i++)
        {
            s=0;
            if(prime[i]==0)
                for(j=i; j<=n; j++)
                {
                    if(prime[j]==0)
                    {
                        s=j+s;
                        if(s==n)
                        {
                            p++;
                            break;
                        }
                    }
                }
        }
        printf("%d\n",p);
    }


}
