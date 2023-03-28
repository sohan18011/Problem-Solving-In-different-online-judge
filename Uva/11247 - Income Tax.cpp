#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,v;
    while(scanf("%d%d",&n,&x)==2)
    {
        if(x==0&&n==0)
        {
            break;
        }
        if(x==100)
        {
            cout<<"Not found"<<endl;
            continue;
        }

        v=100*(n-1)/(100-x);
        if((100*(n-1)%(100-x))==0)
            v--;
        if(v<n)
            cout<<"Not found"<<endl;
        else
        {
            cout<<v<<endl;
        }

    }
}
