class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        while(l<=r)
        {
            if(nums[r]==target)
            {
                return r;
            }
             else if(nums[r]<target)
            {
                return r+1;
            }
            else if(nums[r]>target)
            {
                r--;
            }
            else
            {
                break;
            }
        }
        return 0;
    }
};