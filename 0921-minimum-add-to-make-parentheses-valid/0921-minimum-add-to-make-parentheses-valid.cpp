class Solution {
public:
    int minAddToMakeValid(string s) {
        int i;
        stack<char>st;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push(s[i]);
            }
            else if(!st.empty() && st.top()=='(' && s[i]==')')
            {
                st.pop();
            }
            else
            {
                st.push(')');
            }
        }
        return st.size();
    }
};