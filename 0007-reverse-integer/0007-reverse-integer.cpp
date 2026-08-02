class Solution {
public:
    int reverse(int x) {
        long long temp=x;
        long long  rev=0;
        while(temp!=0)
        {
            rev=rev*10+(temp%10);
            temp/=10;
        }
        if (rev>INT_MAX||rev<INT_MIN)
        {
         return 0;
        }
        return rev;
    }
};