#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a[1000],b,j=0;
    cin>>n>>b;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        if(a[i]<=b)
            j++;
        else
            j=j+2;
    }
    cout<<j<<endl;
}
