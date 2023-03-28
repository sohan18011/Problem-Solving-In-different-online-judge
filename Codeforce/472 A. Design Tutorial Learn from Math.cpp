#include<bits/stdc++.h>
using namespace std;
long long int p[1000000];
int main()
{
    long long int i,j;
    p[0]=1;
    p[1]=1;
    for(i=2; i<1000000; i++)
    {
        if(p[i]==0)
        {
            for(j=i+i; j<1000000; j=j+i)
            {
                p[j]=1;
            }
        }
    }
    int n,pp;
    cin>>n;
    for(i=2; i<n; i++)
    {
        if(p[i]==1)
        {
            for(j=i+1; j<n; j++)
            {
                if(p[j]==1)
                {
                    if((i+j)==n)
                    {
                        cout<<i<<" "<<j<<endl;
                        pp=1;
                        break;
                    }
                }
            }
        }
        if(pp==1)
            break;
    }
}

