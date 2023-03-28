#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,x[1000],j=0,i;
    cin>>n>>t;
    for(i=0; i<n; i++)
        cin>>x[i];
    for(i=0; i<n; i++)
    {
        if(x[i]<=t)
            j++;
        else
            j=j+2;
    }
    cout<<j<<endl;
}
