#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>nums;
    vector<vector<int>>result;
    int i,j,n;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>j;
        nums.push_back(j);
    }


    for(i=0; i<n; i++)
    {
        vector<int>v(nums.begin(),nums.end());
        v.erase(v.begin()+i);
       // auto res =permute(v);
        for(j=0; j<res.size(); j++)
        {
            vector<int>vv=res[j];
            vv.insert(v.begin(),nums[i]);
            result.push_back(vv);

        }
    }

    cout<<result<<endl;
}
