class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int l=1,n=position.size();
        int r=position[n-1]-position[0];
        int ans=0;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(check(position,m,mid))
            {
            ans=mid;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        return ans;
    }
    bool check(vector<int>& position, int m,int dist)
    {   
        int i,count=1;
        int last=position[0];
        for(i=1;i<position.size();i++)
        {
        if(position[i]-last>=dist)
        {
            last=position[i];
            count++;
        }
    }
    return count>=m;
    }
};