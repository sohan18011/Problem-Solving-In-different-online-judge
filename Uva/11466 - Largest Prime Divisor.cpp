#include<bits/stdc++.h>
using namespace  std;
#define ll long long int
#define cover(a,d) memset(a,d,sizeof(a))
#define Max 10001000
bool prime[Max];
ll p[1000000],k=0;
void sieve()
{
 ll i,j;
 prime[1]=false;
 for(i=2;i<=10001000;i++)
 {
  if(prime[i]!=false)
  {
   p[k++]=i;
   for(j=i+i;j<=10001000;j+=i)
   {
    prime[j]=false;
   }
  }
 }
}
int main()
{
    cover(prime,true);
    sieve();
    ll n,i,j,a;
    int c;
    while(scanf("%lld",&n)==1)
    {
        if(n==0) break;
        if(n<0) n*=-1;
        for(i=0,c=0;i<k&&n>1&&p[i]<=n;i++)
        {
            if(n%p[i]==0)
            {
                //pf("%lldn",p[i]);
                c++;
                while(n>1 && n%p[i]==0)
                {
                    n/=p[i];
                }
                a=p[i];
            }
            if(n==1) break;
        }
        if(n==1)
        {
            if(c>1) printsf("%lld\n",a);
            else printf("-1\n");
        }
        else
        {
            if(c>0) printf("%lld\n",n);
            else printf("-1\n");
        }
    }
}
