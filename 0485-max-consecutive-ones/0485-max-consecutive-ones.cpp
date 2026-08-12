class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i,count=0,max_ans=0;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                count++;
                max_ans=max(max_ans,count);
            }
            else
            {
                count=0;
            }
        }
        return max_ans;
    }
};