class Solution {
public:
    int scoreOfParentheses(string s) {
      stack<int>st;
      int i,val=0,num=0,tp=0;
      st.push(0);
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
            num=max(val*2,1);
            tp=st.top();
            st.pop();
            st.push(tp+num);
        }
      }
    return st.top();  
    }
};