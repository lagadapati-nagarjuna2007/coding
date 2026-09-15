class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        long long l=1,ans=-1;
        long long  r=10000000;
        while(l<=r)
        {
            long long mid=l+(r-l)/2;
            if(ischeck(dist,hour,mid))
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
    int ischeck(vector<int>& dist, double hour,long long mid)
    {
        int i;
        double time=0.0;
        for(i=0;i<dist.size();i++)
        {
            double t=(double) dist[i]/mid;
        if(i!=dist.size()-1)
        {
            time+=ceil(t);
        }
        else
        {
            time+=t;
        }
        }
        return time<=hour;
    }
};