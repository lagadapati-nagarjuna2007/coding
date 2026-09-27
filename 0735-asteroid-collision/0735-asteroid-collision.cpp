class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>s;
        for(auto a:asteroids)
        {
        while(!s.empty()&&a<0&&s.top()<-a&& s.top()>0)
        {
            s.pop();
        }
        if(!s.empty()&& a<0 && s.top()>0)
        {
            if(s.top()==-a)
            {
                s.pop();
            }
        }
        else
        {
            s.push(a);
        }
    }
    vector<int>ans(s.size());
    for(int i=s.size()-1;i>=0;i--)
    {
        ans[i]=s.top();
        s.pop();
    }
    return ans;
    }
};