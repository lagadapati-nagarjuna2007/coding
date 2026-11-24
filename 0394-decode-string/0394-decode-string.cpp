class Solution {
public:
    string decodeString(string s) {
        stack<char>st;
        int i,j;
        for(auto ch:s)
        {
        if(ch!=']')
        {
            st.push(ch);
        }
        else
        {
        string str;
        while(!st.empty()&& st.top()!='[')
        {
            str.push_back(st.top());
            st.pop();
        }
        st.pop();
        reverse(str.begin(), str.end());
        string num;
        while(!st.empty()&&isdigit(st.top()))
        {
            num=st.top()+num;
            st.pop();
        }
        int number=stoi(num);
        string repeated;
        for(j=0;j<number;j++)
        {
            repeated+=str;
        }
        for(auto ch:repeated)
        {
            st.push(ch);
        }
        }}
        string result;
        while(!st.empty())
        {
            result+=st.top();
            st.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};