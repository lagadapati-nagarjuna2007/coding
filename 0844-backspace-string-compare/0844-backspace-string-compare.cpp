class Solution {
public:
    bool backspaceCompare(string s, string t) {
         return build(s)==build(t);
    }
    string build(string str)
    {
        stack<int>s;
        string str1;
        for(char ch:str)
        {
            if(ch=='#')
            {
                if(!s.empty())
                {
                    s.pop();
                }
            }
            else
            {
                s.push(ch);
            }
        }
        while(!s.empty())
        {
            str1+=s.top();
            s.pop();
        }
        return str1;
    }
};