class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int l=1,ans=-1;
        int r=*max_element(bloomDay.begin(),bloomDay.end());
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(ischeck(bloomDay,m,k,mid))
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
        int ischeck(vector<int>& bloomDay, int m, int k,int day)
        {
            int b=0,count=0;
            for(auto p:bloomDay)
            {
                if(p<=day)
                {
                    count++;
                    if(count==k)
                    {
                        count=0;
                        b++;
                    }
                }
                else
                {
                    count=0;
                }
            }
            return b>=m;
        }
};