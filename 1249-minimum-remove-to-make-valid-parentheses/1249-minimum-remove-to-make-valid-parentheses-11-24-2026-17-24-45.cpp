class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int i;
        stack<int>st;
        string result;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push(i);
            }
            else if(s[i]==')')
            {
                if(!st.empty())
                {
                    st.pop();
                }
                else
                {
                    s[i]='#';
                }
            }
            else
            {
                continue;
            }}
            while(!st.empty())
            {
                s[st.top()]='#';
                st.pop();
            }
            for(auto ch:s)
            {
                if(ch!='#')
                {
                result.push_back(ch);
                }
            }
            return result;
    }
};