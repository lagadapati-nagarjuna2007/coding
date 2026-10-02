class Solution {
public:
    int minAddToMakeValid(string s) {
        int i,count=0;
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
                count++;
            }
        }
        return st.size()+count;
    }
};