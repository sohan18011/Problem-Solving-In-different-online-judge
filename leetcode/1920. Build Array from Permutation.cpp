#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    vector<int>nums;
    vector<int>num;
    for(i=0; i<6; i++)
    {
        cin>>j;
        nums.push_back(j);
    }

    for(i=0; i<6; i++)
    {
        j=nums[i];
        num.push_back(nums[j]);

        // cout<<j<<" "<<nums[j]<<' ';
    }


    for(i=0; i<6; i++)
        cout<<num[i]<<' ';
}
