class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int i,total=0,right_sum=0,left=0;
        for(i=0;i<nums.size();i++)
        {
            total+=nums[i];
        }
        for(i=0;i<nums.size();i++)
        {
            right_sum=total-left-nums[i];
            if(left==right_sum)
            {
                return i;
            }
            else
            {
                left+=nums[i];
            }
        }
        return -1;

    }
};