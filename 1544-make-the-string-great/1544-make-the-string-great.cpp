class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        int i;
        for(i=0;i<s.size();i++)
        {
            if(!st.empty()&& (int)st.top()<=91 && tolower(st.top())==s[i])
            {
                st.pop();
            }
            else if(!st.empty()&& (int)s[i]<=91 && st.top()==tolower(s[i]))
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        int j=st.size()-1;
        string str(st.size(),' ');
        while(!st.empty())
        {
            str[j]=st.top();
            st.pop();
            j--;
        }
        return str;
    }
};