#include<bits/stdc++.h>
using namespace std;
long long int p[1000];
int main()
{
    int i,j;
    p[0]=1;
    p[1]=1;
    for(i=2; i<1000; i++)
    {
        if(p[i]==0)
        {
            for(j=i+i; j<1000; j=j+i)
            {
                p[j]=1;
            }
        }
    }
    int a,b,m=0;
    cin>>a>>b;
    for(i=a; i<b; i++)
    {
        if(p[i]==0)
        {
            for(j=i+1; j<b; j++)
            {
                if(p[j]==0)
                {
                    m=1;
                    break;
                }
            }
        }
        if(m==1)
            break;
    }
    if(m==0&&p[b]==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
