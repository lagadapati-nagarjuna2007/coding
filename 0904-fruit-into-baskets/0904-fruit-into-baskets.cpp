class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>mp;
        int r,l=0,max_ans=0;
        for(r=0;r<fruits.size();r++)
        {
            mp[fruits[r]]++;
            while(mp.size()>2)
            {
                mp[fruits[l]]--;
                if(mp[fruits[l]]==0)
                {
                    mp.erase(fruits[l]);
                }
                l++;
            }
        max_ans=max(max_ans,r-l+1);     
    }
    return max_ans;
    }
};