#include<bits/stdc++.h>
using namespace std;
long long int p[10000];
int main()
{
    int i,j;
    p[0]=1;
    p[1]=0;
    for(i=2;i<1000;i++)
    {
        if(p[i]==0)
        {
            for(j=i+i;j<1000;j=j+i)
            {
                p[j]=1;
            }
        }
    }
    int t,l,r;
    cin>>t;
    while(t--)
    {
        j=0;
        cin>>l>>r;
        for(i=l;i<=r;i++)
        {
            if(p[i]==0)
                j++;
            //else if(i%2==0)
              //  j++;
        }
        cout<<j<<endl;
    }

}
