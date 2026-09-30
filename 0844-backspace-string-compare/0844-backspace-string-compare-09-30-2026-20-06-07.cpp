class Solution {
public:
    bool backspaceCompare(string s, string t) {
         return build(s)==build(t);
    }
    string build(string str)
    {
        string str1;
        int count=0;
        for(int i=str.size()-1;i>=0;i--)
        {
            if(str[i]=='#')
            {
                count++;
            }
            else if(count>=1)
            {
                count--;
            }
            else
            {
                str1.push_back(str[i]);
            }}
        return str1;
    }
};