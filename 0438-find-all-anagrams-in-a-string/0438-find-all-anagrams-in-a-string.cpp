class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int r,l=0,count=p.size();
        unordered_map<char,int>mp;
        vector<int>res;
        for(auto i:p)
        {
            mp[i]++;
        }
        for(r=0;r<s.size();r++)
        {
            char ch=s[r];
            int val=mp[ch];
            if(val>0)
            count--;
            mp[ch]=val-1;
            if(r-l+1>p.size())
            {
                char leftchar=s[l];
                int leftval=mp[leftchar];
                if(leftval>=0)
                {
                count++;
                }
                mp[leftchar]=leftval+1;
                l++;
            }
                if(count==0)
                {
                    res.push_back(l);
                }
            }
        return res;
    }
};