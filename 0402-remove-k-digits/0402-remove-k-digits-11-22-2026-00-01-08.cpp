class Solution {
public:
    string removeKdigits(string num, int k) {
        string str="";
        int i;
        if(num.size()==k)
        return "0";
        for(i=0;i<num.size();i++)
        {
            while(!str.empty() && k>0 && (int)str.back()>(int)num[i])
            {
                str.pop_back();
                k--;
            }
            str.push_back(num[i]);
        }
        while(k>0)
        {
            str.pop_back();
            k--;
        }
        int result = str.find_first_not_of('0');
        if(result==string::npos)
        {
            return "0";
        }
        else
        {
            return str.substr(result);
        }
    }
};