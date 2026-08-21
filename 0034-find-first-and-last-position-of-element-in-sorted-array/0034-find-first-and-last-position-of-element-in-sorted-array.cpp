class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        return {left(nums,target),right(nums,target)};
    }
        int left(vector<int>& nums, int target)
        {
            int l=0,r=nums.size()-1,mid,first=-1;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(nums[mid]==target)
            {
                first=mid;
                r=mid-1;
            }
            else if(nums[mid]<target)
            {  
                l=mid+1;
            }
            else
            { 
                r=mid-1;
            }
        }
        return first;
    }
    int right(vector<int>& nums, int target)
    {
        int l=0,r=nums.size()-1,mid,last=-1;
    while(l<=r)
        {
            mid=l+(r-l)/2;
            if(nums[mid]==target)
            {
                last=mid;
                l=mid+1;
            }
            else if(nums[mid]<target)
            {  
                l=mid+1;
            }
            else
            { 
                r=mid-1;
            }
        }
        return last;
    }
};