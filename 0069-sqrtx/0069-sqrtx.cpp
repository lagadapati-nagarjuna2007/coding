class Solution {
public:
    int mySqrt(int x) {
        long long l=1,r=x/2,mid=0,square=0;
        if(x<2)
        return x;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            square=mid*mid;
            if(square>x)
            r=mid-1;
            else
            l=mid+1;
        }
        return r;
    }
};