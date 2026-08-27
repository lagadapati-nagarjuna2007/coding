class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l=*max_element(weights.begin(),weights.end()),ans=0;
        int r=accumulate(weights.begin(),weights.end(),0);
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(check(weights,days,mid))
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
    bool check(vector<int>& weights, int days,int capacity)
    {
        int sum=0,day=1;
        for(auto p:weights)
        {
            sum+=p;
            if(sum>capacity)
            {
                day++;
                sum=p;
            }
        }
        return day<=days;
    }
};