class Solution {
public:
    int minLength(string s) {
        string str="";
        int i;
        for(i=0;i<s.size();i++)
        {
        if(!str.empty() && (str.back()=='A'&& s[i]=='B'))
        {
            str.pop_back();
        }
        else if(!str.empty() && (str.back()=='C'&& s[i]=='D'))
        {
            str.pop_back();
        }
        else
        {
            str.push_back(s[i]);
        }
    }
    return str.size();
    }
};