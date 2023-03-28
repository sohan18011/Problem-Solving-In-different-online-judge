class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int i,j,n=nums.size();
       // set<int>st;
        sort(nums.begin(),nums.end());
        for( i=0;i<n-1;i++)
        {
          if(nums[i]==nums[i+1])
              return true;
        }
        return false;
    }
};