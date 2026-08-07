class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i,j,k;
        set<vector<int>> st;
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size()-2;i++)
        {
            j=i+1,k=nums.size()-1;
            while(j<k)
            {
                if(nums[i]+nums[j]+nums[k]==0)
                {
                    st.insert({nums[i],nums[j],nums[k]});
                    j++;
                }
                else if(nums[i]+nums[j]+nums[k]>0)
                {
                    k--;
                }
                else
                {
                    j++;
                }
            }
        }
        vector<vector<int>>ans(st.begin(),st.end());
        return ans;
    }
};