#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, aa, bb, j, c;
    while(scanf("%lld%lld", &a, &b)==2)
    {
        if(a==0 && b==0)
        {
            break;
        }
        c=0;
        j=0;
        while(a>0 || b>0)
        {
            aa = a%10;
            a = a/10;
            bb = b%10;
            b = b/10;
            if((aa+bb)+j>9)
            {
                c++;
                j=1;
            }
            else
            {
                j=0;
            }
        }
        if(c==0)
        {
            printf("No carry operation.\n");
        }
        else if(c==1)
        {
            printf("%lld carry operation.\n", c);
        }
        else
        {
            printf("%lld carry operations.\n", c);
        }
    }
    return 0;
}
