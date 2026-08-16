class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int r,l=0,max_ans=0;
        unordered_map<int,int>mp;
        for(r=0;r<s.size();r++)
        {
            mp[s[r]]++;
            while(mp[s[r]]>1)
            {
                mp[s[l]]--;
                if(mp[s[l]]==0)
                {
                    mp.erase(s[l]);
                }
                l++;
            }
            max_ans=max(max_ans,r-l+1);
        }
        return max_ans;
    }
};