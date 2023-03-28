#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[100000];
char c[3][310];
int main()
{
    int t,n,i,j,k;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d",&n);

        for(i=0; i<3; i++)
            scanf("%s",&c[i]);
        ll mx=0,ans=-1;
        for(k=0; k<n; i++)
        {
            mx=0;
            for(i=0; i<3; i++)
            {
                for(j=k*3; j<k*3+3; j++)
                {
                    if(c[i][j]=='*')
                        mx++;
                }
            }
            if(mx>ans)
                ans=mx;
            mx=0;
        }
        cout<<ans*4<<endl;

    }
}

