class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int l=*max_element(nums.begin(),nums.end());
        int r=accumulate(nums.begin(),nums.end(),0);
        int ans=0;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(check(nums,k,mid))
            {
            ans=mid;
            r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return ans;
    }
    bool check(vector<int>& nums, int k,int dist)
    {
        int b=1,sum=0;
        for(auto p:nums)
        {
            if(sum+p<=dist)
            {
                sum+=p;
            }
            else
            {
                b++;
                sum=p;
            }
        }
        return b<=k;
    }
};