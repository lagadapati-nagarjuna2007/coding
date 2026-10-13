class Solution {
public:
    string decodeString(string s) {
        stack<char>st;
        string result="";
        int i,j;
        for(i=0;i<s.size();i++)
        {
            if(s[i]!=']')
            {
                st.push(s[i]);
            }
            else
            {
                string str="";
                while(st.top()!='[')
                {
                    str.push_back(st.top());
                    st.pop();
                }
                st.pop();
                reverse(str.begin(),str.end());
                string num="";
                while(!st.empty() && isdigit(st.top()))
                {
                    num.push_back(st.top());
                    st.pop();
                }
                reverse(num.begin(),num.end());
                int num1=stoi(num);
                string temp="";
                for(j=0;j<num1;j++)
                {
                    temp+=str;
                }
                for(char ch:temp)
                {
                    st.push(ch);
                }
                }}
            while(!st.empty())
            {
                result.push_back(st.top());
                st.pop();
            }
            reverse(result.begin(),result.end());
            return result;
            }
};