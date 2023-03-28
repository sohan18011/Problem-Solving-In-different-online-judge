#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m,c;
    while(scanf("%lld%lld%lld",&n,&m,&c)==3)
    {
        if(n==0 && m==0 && c==0)
            break;
        if(c == 0)
        {
            printf("%lld\n",(n-7)*(m-7)/2);
        }
        else
            printf("%lld\n",((n-7)*(m-7)+1)/2);
    }
    return 0;
}
