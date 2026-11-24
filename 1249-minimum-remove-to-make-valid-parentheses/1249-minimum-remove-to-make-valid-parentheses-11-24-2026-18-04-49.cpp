class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int i,open=0;
        string result;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                open++;
            }
            else if(s[i]==')')
            {
                if(open>0)
                {
                    open--;
                }
                else
                {
                    s[i]='#';
                }
            }}
           for(i=s.size()-1;i>=0;i--)
           {
            if(s[i]=='('&&open>0)
            {
                s[i]='#';
                open--;
            }
           }
            for(auto ch:s)
            {
                if(ch!='#')
                {
                result.push_back(ch);
                }
            }
            return result;
    }
};