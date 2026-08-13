class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int i,j,count=0;
        for(i=0;i<fruits.size();i++)
        {
            for(j=0;j<baskets.size();j++)
            {
                if(baskets[j]>=fruits[i]&& fruits[i]>0&&baskets[j]>0)
                {
                    fruits[i]=0;
                    baskets[j]=0;
                    count++;
                    break;
                }
            }
        }
        return fruits.size()-count;
    }
};