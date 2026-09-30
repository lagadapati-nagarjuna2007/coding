class Solution {
public:
    string removeDuplicates(string s) {
       int i;
       stack<int>st;
       int count=0;
       for(i=0;i<s.size();i++)
       {
        while(!st.empty() && s[st.top()]==s[i])
        {
            st.pop();
            count++;
        }
        if(!s.empty()&& count>0)
        {
            count--;
        }
        else
        {
            st.push(i);
        }
    }
    string str(st.size(),' ');
    for(i=st.size()-1;i>=0;i--)
    {
        str[i]=s[st.top()];
        st.pop();
    }
    return str;
    }
};