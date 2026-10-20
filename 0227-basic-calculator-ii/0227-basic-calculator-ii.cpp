class Solution {
public:
    int calculate(string s) {
        int num=0;
        char op='+';
        stack<int>st;
        int ans=0,i;
        for(i=0;i<=s.size();i++)
        {
            char ch= (i==s.size())?'+':s[i];
            if (ch == ' ')
            {
                continue;
            }
            if(isdigit(ch))
            {
                num=num*10+(ch-'0');
            }
            else
            {
                if(op=='+')
                {
                    st.push(num);
                }
                else if(op=='-')
                {
                    st.push(-num);
                }
                else if(op=='*')
                {
                    int mul=st.top();
                    st.pop();
                    st.push(num*mul);
                }
                else
                {
                    int div=st.top();
                    st.pop();
                    st.push(div/num);
                }
                op=ch;
                num=0;
            }
        }
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};