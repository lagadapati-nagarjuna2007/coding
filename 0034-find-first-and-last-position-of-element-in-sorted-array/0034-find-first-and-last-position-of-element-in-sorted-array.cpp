class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    int a=left_occurence(nums,target);
    int b=right_occurence(nums,target);
    return {a,b};
    }
    int right_occurence(vector<int>& nums, int target)
    {
        int l=0,r=nums.size()-1,right=-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]==target)
            {
                right=mid;
                l=mid+1;
            }
            else if(nums[mid]<=target)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
    return right;
    }
    int left_occurence(vector<int>& nums, int target)
    {
        int l=0,r=nums.size()-1,left=-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]==target)
            {
                left=mid;
                r=mid-1;
            }
            else if(nums[mid]<=target)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
    return left;
    }
};