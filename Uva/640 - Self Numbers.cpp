#include<bits/stdc++.h>
using namespace std;
long long int ans[10000000];
int main()
{
    long long int i,j,t,s;
    for(i=1; i<10000000; i++)
    {
        j=i;
        s=0;
        while(j)
        {
            s=j%10+s;
            j=j/10;
        }
        if(s+i<=1000000)
        ans[i+s]=1;
    }
    for(i=1; i<1000000; i++)
    {
        if(ans[i]!=1)
            cout<<i<<endl;
    }
    cout<<"1000000"<<endl;
}
