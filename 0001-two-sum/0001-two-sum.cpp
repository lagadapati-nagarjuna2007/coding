class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j,k;
        unordered_map<int,int>mp;
        for(i=0;i<nums.size();i++)
        {
            mp[nums[i]]=i;
        }
        for(i=0;i<nums.size();i++)
        {
            if(mp.find(target-nums[i])!=mp.end() && mp[target-nums[i]]!=i)
            {
                break;
         }
        }
        return {i,mp[target-nums[i]]};
    }
};