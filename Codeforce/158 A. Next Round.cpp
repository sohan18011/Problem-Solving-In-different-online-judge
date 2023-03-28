#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[1000],j=0,i;
    cin>>t>>n;
    for(i=0; i<t; i++)
    {
        cin>>a[i];
    }
    // sort(a,a+i);
    for(i=0; i<t; i++)
    {
        if(a[n-1]<=a[j] && a[j]!=0)
            j++;
    }
    cout<<j<<endl;

}
