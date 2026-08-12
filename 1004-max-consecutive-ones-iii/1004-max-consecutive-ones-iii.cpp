class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,r,count_zeroes=0,max_ans=0;
        for(r=0;r<nums.size();r++)
        {
            if(nums[r]==0)
            {
                count_zeroes++;
            }
            while(count_zeroes>k)
            {
                if(nums[l]==0)
                {
                    count_zeroes--;
                }
                l++;
            }
            max_ans=max(max_ans,r-l+1);
        }
        return max_ans;
    }
};