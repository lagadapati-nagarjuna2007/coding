class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int l=*min_element(bloomDay.begin(),bloomDay.end());
        int r=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(check(bloomDay,m,k,mid))
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
    bool check(vector<int>& bloomDay, int m, int k,int dist)
    {
        int i,count=0,b=0;
        for(i=0;i<bloomDay.size();i++)
        {
            if(bloomDay[i]<=dist)
            {
                    count++;
            if(count==k)
            {
                b++;
                count=0;
            }}
            else
            {
                count=0;
            }   
        }
        return b>=m;
    }
};