class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        int i;
        for(i=0;i<s.size();i++)
        {
            if(!st.empty()&& (int)st.top()<=91 && s[i]==tolower(st.top()))
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
        string str(st.size(),' ');
        int j=st.size()-1;
        while(!st.empty())
        {
            str[j]=st.top();
            st.pop();
            j--;
        }
        return str;

    }
};