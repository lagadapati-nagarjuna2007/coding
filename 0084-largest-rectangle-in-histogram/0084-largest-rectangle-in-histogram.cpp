class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        int i,max_area=0,height=0,max_height=0,width=0,area=0;
        for(i=0;i<=heights.size();i++)
        {
            int h=(i==heights.size())?0:heights[i];
            while(!st.empty()&& heights[st.top()]>h)
            {
                height=heights[st.top()];
                st.pop();
                max_height=max(height,h);
                if(st.empty())
                {
                    width=i;
                }
                else
                {
                    width=i-st.top()-1;
                }
                area=width*max_height;
                max_area=max(max_area,area);
            }
            st.push(i);
        }
        return max_area;
    }
};