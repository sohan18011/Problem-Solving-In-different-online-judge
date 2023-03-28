#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x,s;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        s=(((x*567)/9+7492)*235)/47-498;
        s=s/10;
        s=s%10;
        printf("%d\n",abs(s));
    }
}
