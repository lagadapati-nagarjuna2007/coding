class Solution {
public:
    int calculate(string s) {
        stack<int>st;
        int ans=0;
        int i,num=0;
        char op='+';
        for(i=0;i<=s.size();i++)
        {
            char ch= (i==s.length())?'+':s[i];
            if(isdigit(ch))
            {
                num=num*10+(ch-'0');
            }
            else if(ch!=' ')
            {
                if(op=='+')
                {
                    st.push(num);
                }
                else if(op=='-')
                {
                    st.push(-num);
                }
                else if(op=='*')
                {
                    int tp=st.top();
                    st.pop();
                    st.push(tp*num);
                }
                else
                {
                    int tp=st.top();
                    st.pop();
                    st.push(tp/num);
                }
                num=0;
                op=ch;
            }
        }
        for(i=st.size()-1;i>=0;i--)
        {
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};