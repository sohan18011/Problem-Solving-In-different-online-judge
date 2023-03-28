#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,nums;
    map<int ,int> mp;
    for(i=0;i<n;i++)
    {
        cin>>nums;
        mp[nums]++;
    }
    int ans = -1,res;
    for(auto it = mp.begin(); it!=mp.end();it++)
    {
        if(ans<it->second)
        {
            res=it->first;
            ans=it->second;
        }
    }
    cout <<res<<endl;
}
