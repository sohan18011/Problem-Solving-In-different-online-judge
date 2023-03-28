#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];

    int ans=0;
    int fh=a[0],lh=a[n-1],w;
    i=0,j=n-1;
    ans=min(fh,lh)*n-1;
    while(i<j)
    {
        if(fh<lh)
        {
            int area=fh*abs(i-j);
            ans=max(area,ans);
            i++;
            fh=a[i];
        }
        else
        {
            int area=lh*abs(i-j);
            ans=max(area,ans);
            j--;
            lh=a[j];

        }

    }
    cout<<ans<<endl;
}
