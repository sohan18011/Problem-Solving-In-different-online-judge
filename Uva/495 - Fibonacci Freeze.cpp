#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  int s=0,n,s1=0,s2=1,i;
    scanf("%lld",&n);
    for(i=0; i<=n; ++i)
    {

        s=s1+s2;
        s1=s2;
        s2=s;

    }
    printf("The Fibonacci number for %lld is %lld\n",n,s);
}
