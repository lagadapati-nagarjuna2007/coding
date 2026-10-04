class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st;
        st.push(0);
        int i,val=0,score=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push(0);
            }
            else
            {
                val=st.top();
                st.pop();
                score=max((2*val),1);
                int top=st.top();
                st.pop();
                st.push(score+top);
            }
        }
        return st.top();
    }
};