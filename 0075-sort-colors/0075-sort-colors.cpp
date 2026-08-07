class Solution {
public:
    void sortColors(vector<int>& nums) {
    int left=0,mid=0,right=nums.size()-1;
    while(mid<=right)
    {
        if(nums[mid]==0)
        {
            nums[mid]=nums[left];
            nums[left]=0;
            left++,mid++;
        }
        else if(nums[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(nums[right],nums[mid]);
            right--;
        }
    }
    return;
    }
};