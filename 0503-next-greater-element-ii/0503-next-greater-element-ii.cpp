class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int i,n=nums.size();
        vector<int>ans(n,-1);
        stack<int>s;
        for(i=n*2-1;i>=0;i--)
        {
            int num=nums[i%n];
            while(!s.empty()&& num>=s.top())
            {
                s.pop();
            }
            if(!s.empty()&& i<n)
            {
                ans[i]=s.top();
            }
            s.push(num);
        }
    return ans;
    }
};