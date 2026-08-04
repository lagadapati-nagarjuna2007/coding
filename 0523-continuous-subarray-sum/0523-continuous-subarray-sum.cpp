class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int i,prefix_sum=0,rem;
        unordered_map<int,int>mp;
        mp[0]=-1;
        for(i=0;i<nums.size();i++)
        {
            prefix_sum+=nums[i];
            rem=prefix_sum%k;
            if(mp.find(rem)!=mp.end())
            {
                if(i-mp[rem]>=2)
                {
                    return true;
                }}
                else
                {
                    mp[rem]=i;
                }
            }
        return false;
    }
};