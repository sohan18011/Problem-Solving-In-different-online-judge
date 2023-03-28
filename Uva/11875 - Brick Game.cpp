#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,ar[1000],n,i,j=1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            scanf("%d",&ar[i]);
        }
        sort(ar,ar+n);
        printf("Case %d: %d\n",j,ar[(n/2)]);
        j++;
    }
}
