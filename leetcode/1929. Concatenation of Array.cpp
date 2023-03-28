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
          nums.push_back(j );
      }
    for(i=0; i<nums.size(); i++)
        cout<<nums[i]<<' ';
}
