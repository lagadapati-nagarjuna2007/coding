class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
       int l=1,min_ans=INT_MAX;
      int r= *max_element(piles.begin(), piles.end());
       while(l<=r)
       {
        long long hours=0;
        int mid=l+(r-l)/2;
        for(auto p:piles)
        {
            hours+=(p+mid-1)/mid;
        }
        if(hours<=h)
        {
            min_ans=min(min_ans,mid);
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
       } 
       return min_ans;
    }
};