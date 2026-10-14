class Solution {
public:
    string removeDuplicateLetters(string s) {
        stack<char>st;
        unordered_map<char,int>mp;
        unordered_set<char>visited;
        int i,j;
        for(i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        for(i=0;i<s.size();i++)
        {
            mp[s[i]]--;
            if(visited.count(s[i]))
            {
                continue;
            }
            while(!st.empty() && mp[st.top()]>0 && st.top()>s[i])
            {
               visited.erase(st.top());
                st.pop();

            }
            st.push(s[i]);
            visited.insert(s[i]);
        }
        string str(st.size(),' ');
        j=st.size()-1;
        while(!st.empty())
        {
            str[j]=st.top();
            st.pop();
            j--;
        }
        return str;

    }
};