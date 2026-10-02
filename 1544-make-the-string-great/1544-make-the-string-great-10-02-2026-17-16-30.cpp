class Solution {
public:
    string makeGood(string s) {
       string str="";
        int i;
        for(i=0;i<s.size();i++)
        {
            if(!str.empty()&& (int)str.back()<=91 && tolower(str.back())==s[i])
            {
                str.pop_back();
            }
            else if(!str.empty()&& (int)s[i]<=91 && str.back()==tolower(s[i]))
            {
                str.pop_back();
            }
            else
            {
                str.push_back(s[i]);
            }
        }
        return str;
    }
};