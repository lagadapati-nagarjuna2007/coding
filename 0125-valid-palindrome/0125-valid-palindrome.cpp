class Solution {
public:
    bool isPalindrome(string s) {
       int l=0,j=s.size()-1,i;
       for(i=0;i<s.size();i++)
       {
        s[i]=tolower(s[i]);
       }
       while(l<j)
       {
        if(!isalnum(s[l]))
        {
            l++;
            continue;
        }
        if(!isalnum(s[j]))
        {
            j--;
            continue;
        }
        if(s[l]==s[j])
        {
            l++;
            j--;
        }
        else
        {
            return false;
        }
       }
       return true; 
    }
};