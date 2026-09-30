class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int i,max_area=0,area=0,width=0,height=0;
        stack<int>s;
        for(i=0;i<=heights.size();i++)
        {
            int h=(i==heights.size())?0:heights[i];
            while(!s.empty()&& h<heights[s.top()])
            {
                height=heights[s.top()];
                s.pop();
                if(s.empty())
                {
                    width=i;
                }
                else
                {
                    width=i-s.top()-1;
                }
                area=height*width;
                max_area=max(max_area,area);
            }
            s.push(i);
        }
        return max_area;
    }
};