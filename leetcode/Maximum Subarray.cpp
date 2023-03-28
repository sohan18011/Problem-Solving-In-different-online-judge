#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++)
        cin>>a[i];
    int max1=a[0];
    int max2=a[0];
    for(i=1;i<n;i++)
    {
        max1=max(a[i],max1+a[i]);
        max2=max(max1,max2);
    }
    cout<<max2<<endl;

}
