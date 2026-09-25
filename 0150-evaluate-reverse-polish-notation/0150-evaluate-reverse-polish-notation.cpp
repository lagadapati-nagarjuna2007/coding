class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        string ch;
        int i,num=0;
        for(i=0;i<tokens.size();i++)
        {
            ch=tokens[i];
            if(ch != "+" && ch != "-" && ch != "*" && ch != "/")
            {
                st.push(stoi(ch));
            }
            else
            {
                if(ch=="+")
                {
                    int tp=st.top();
                    st.pop();
                    int tp1=st.top();
                    st.pop();
                    st.push(tp+tp1);
                }
                else if(ch=="-")
                {
                    int tp=st.top();
                    st.pop();
                    int tp1=st.top();
                    st.pop();
                    st.push(tp1-tp);
                }
                else if(ch=="*")
                {
                    int tp=st.top();
                    st.pop();
                    int tp1=st.top();
                    st.pop();
                    st.push(tp*tp1);
                }
                else
                {
                    int tp=st.top();
                    st.pop();
                    int tp1=st.top();
                    st.pop();
                    st.push(tp1/tp);
                }
            }
        }
        return st.top();
    }
};