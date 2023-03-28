#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j=0,k,sum[n+1],nums[n+1];
    for(i=0; i<n; i++)
    {
        cin>>nums[i];
    }
    map<int,int>mp;
    mp[nums[0]]++;
    sum[0]=nums[0];
    j++;
    for(i=1; i<n; i++)
    {
        if(mp[nums[i]] <2)
        {
            mp[nums[i]]++;
            sum[j]=nums[i];
            j++;
        }


    }
    for(i=0; i<j; i++)
    {
        cout<<sum[i]<<' ';
    }
}
