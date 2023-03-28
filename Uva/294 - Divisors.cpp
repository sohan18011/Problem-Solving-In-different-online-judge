#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,x,y,j,p,a;
    scanf("%lld",&n);
    for(i=1; i<=n; i++)
    {
        m=1;
        int s=0;
        scanf("%lld %lld",&x,&y);
        long long int arr[y];
        for(j=x; j<=y; j++)
        {
            for(p=1; p<=j; j++)
            {
                if(j%p==0)
                {
                    s++;
                    arr[p]=j;
                }

            }
            if(m<s)
            {

            }

        }
        a=arr[0];
        for(p=1; p<n; j++)
        {
            if(a<arr[p])
            {
                a=arr[p];
            }

        }
        printf("%lld has a maximum of %lld divisors.",a,s);

    }
}

