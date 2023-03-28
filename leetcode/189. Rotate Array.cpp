#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,k;
    cin>>n>>k;
    int nums[n+1];
    for(i=0;i<n;i++)
        cin>>nums[i];
    int a[k+1];
    int j=n-k;
    for(i=0;i<k;i++)
    {
       a[i]=nums[j];
       j++;
    }
    for(int i=0;i<k;i++)
        cout<<a[i]<<' ';
    for(i=0;i<n-k;i++)
        cout<<nums[i]<<' ';
    main();

}
