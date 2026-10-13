class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>st;
        int i;
        if(num.size()<=k)
        {
            return "0";
        }
        for(i=0;i<num.size();i++)
        {
        while(!st.empty()&& (int)st.top()>(int)num[i] && k>0)
        {
            k--;
            st.pop();
        }
            st.push(num[i]);
    }
    while(!st.empty()&& k>0)
        {
            st.pop();
            k--;
        }
    string result(st.size(),' ');
    int j=st.size()-1;
    while(!st.empty())
    {   
        result[j]=st.top();
        st.pop();
        j--;
    }
    int pos=result.find_first_not_of('0');
    if(pos==string::npos)
    {
        return "0";
    }
   return result.substr(pos);
    }
};