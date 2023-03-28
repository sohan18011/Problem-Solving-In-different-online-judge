#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n,m,k,s[10000],p=0,i;
    cin>>n>>m;
    if (m<=(n+1)/2)
    {
        cout<<m*2-1<<endl;
    }
    else
    {
        cout<<(m-(n+1)/2)*2<<endl;
    }
    return 0;

}
