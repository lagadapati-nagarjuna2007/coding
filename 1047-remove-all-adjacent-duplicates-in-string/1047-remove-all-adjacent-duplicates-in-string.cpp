class Solution {
public:
    string removeDuplicates(string s) {
        string str="";
        int i;
        for(i=0;i<s.size();i++)
        {
            if(!str.empty() && (char)str.back()==s[i])
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