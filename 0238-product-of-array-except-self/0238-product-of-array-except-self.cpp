class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         vector<int>res(nums.size());
        int i,j,right_product=1;
        res[0]=1;
        for(i=1;i<nums.size();i++)
        {
            res[i]=res[i-1]*nums[i-1];
        }
        for(j=nums.size()-1;j>=0;j--)
        {
            res[j]=right_product*res[j];
            right_product*=nums[j];
        }
        return res;
    }
};