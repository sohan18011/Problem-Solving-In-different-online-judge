
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
    int ans = floor(n/3);
    vector<int>res;
    for(auto it = mp.begin(); it!=mp.end();it++)
    {
        if(ans<=it->second)
        {
            res.push_back(it->first);
        }
    }
    for(auto it = res.begin();it!=res.end();it++)
    cout <<*it<<" ";
}
