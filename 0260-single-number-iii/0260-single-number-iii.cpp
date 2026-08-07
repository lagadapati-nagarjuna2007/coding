class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>num;
        int i;
        for(i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(i=0;i<nums.size();i++)
        {
            if(mp[nums[i]]==1)
            {
                num.push_back(nums[i]);
            }}
            return num;
    }
};