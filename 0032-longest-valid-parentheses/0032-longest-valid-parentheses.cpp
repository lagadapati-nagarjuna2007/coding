class Solution {
public:
    int longestValidParentheses(string s) {
        int i,max_area=0;
        stack<int>st;
        st.push(-1);
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push(i);
            }
            else
            {
                st.pop();
                if(st.empty())
                {
                    st.push(i);
                }
                else
                {
                    max_area=max(max_area,i-st.top());
                }
            }
        }
        return max_area;
    }
};