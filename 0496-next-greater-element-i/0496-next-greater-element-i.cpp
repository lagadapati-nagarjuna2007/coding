class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size(),i,m=nums1.size();
        vector<int>nums(n,-1);
        stack<int>s;
        unordered_map<int,int>mp;
        vector<int>ans(m,-1);
        for(i=n-1;i>=0;i--)
        {
            while(!s.empty()&& nums2[i]>=s.top())
            {
                s.pop();
            }
            if(!s.empty())
            {
                nums[i]=s.top();
            }
            s.push(nums2[i]);
        }
        for(i=0;i<n;i++)
        {
            mp[nums2[i]]=nums[i];
        }
        for(i=0;i<nums1.size();i++)
        {
            if(mp.find(nums1[i])!=mp.end())
            {
                ans[i]=mp[nums1[i]];
            }
        }
        return ans;
    }
};