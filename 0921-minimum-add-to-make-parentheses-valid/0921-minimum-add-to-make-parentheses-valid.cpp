class Solution {
public:
    int minAddToMakeValid(string s) {
       stack<int>st;
       int i,count=0;
       for(i=0;i<s.size();i++)
       {
        if(s[i]=='(')
        {
            st.push(s[i]);
        }    
        else if(!st.empty()&&s[i]==')'&&st.top()=='(')
        {
            st.pop();
        }
        else
        {
            count++;
        }
       }
       return count+st.size();
    }
};