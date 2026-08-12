class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int r,l=0,max_ans=0,count=0;
        long long product=1;
        if(k<=1)
        return 0;
        for(r=0;r<nums.size();r++)
        {
            product=product*nums[r];
            while(product>=k)
            {
               product=product/nums[l];
                l++;
            }
            count+=r-l+1;
        }
        return count;
    }
};