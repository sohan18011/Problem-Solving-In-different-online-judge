#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int p,s;
    while(scanf("%lld",&p)==1)
    {
        if(p<0)
            break;
        s=p*(p+1)/2+1;
        printf("%lld\n",s);
    }
}
