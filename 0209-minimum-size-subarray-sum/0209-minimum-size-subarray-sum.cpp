class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0,r,l=0,min_ans=INT_MAX;
        for(r=0;r<nums.size();r++)
        {
            sum+=nums[r];
            while(sum>=target)
            {
                min_ans=min(min_ans,r-l+1);
                sum-=nums[l];
                l++;
            }
        }
        if(min_ans==INT_MAX)
        return 0;
        else
        return min_ans;
    }
};