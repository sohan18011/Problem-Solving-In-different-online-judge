#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,s,ar[1000],sum,p,j,i,as;
    j=1;
    while(cin>>t)
    {
        as=0;

        if(t==0)
            break;
        sum=0;
        for(i=0; i<t; i++)
        {
            scanf("%d",&ar[i]);
            sum=sum+ar[i];
        }
        s=sum/t;
        for(i=0; i<t; i++)
        {
            if(ar[i]>s)
            {
                as=as+(ar[i]-s);
            }
            p++;
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",j,as);
        j++;

    }
}
