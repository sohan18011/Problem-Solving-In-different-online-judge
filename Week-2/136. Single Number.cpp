class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
       map<int,int>mp;
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
        
        int ans;
        
        
       for(auto i =mp.begin();i!=mp.end();i++){
         // cout<<i->first<<" "<<i->second<<endl;
           if(i->second==1)
               ans=i->first;
       }        return ans;
    }
};