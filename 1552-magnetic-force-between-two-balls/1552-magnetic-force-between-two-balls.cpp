class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
       sort(position.begin(),position.end());
       int l=1,ans=-1;
       int r=1000000000;
       while(l<=r)
       {
        int mid=l+(r-l)/2;
        if(ischeck(position,m,mid))
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
    int ischeck(vector<int>& position, int m,int dist)
    {
        int i,b=1;
        int last=position[0];
        for(i=1;i<position.size();i++)
        {
            if(position[i]-last>=dist)
            {
                last=position[i];
                b++;
            }
        }
        return b>=m;
    }
};