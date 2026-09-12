class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int mid=0,ans=0;
        int l=1;
        int r=*max_element(piles.begin(),piles.end());
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(ischeck(piles,h,mid))
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
    int ischeck(vector<int>& piles, int h,int hours)
    {
        long long hour=0;
        for(auto p:piles)
        {
            hour+=ceil((double)p/hours);
        }
        return hour<=h;
    }
};