class Solution {
public:
    int maxArea(vector<int>& height) {
       int l=0,r=height.size()-1;
       int max_area=0,h,area,width;
       while(l<r)
       {
        h=min(height[l],height[r]);
        width=r-l;
        area=width*h;
        max_area=max(area,max_area);
        if(height[l]<height[r])
        {
            l++;
        }
        else
        {
            r--;
        }
       } 
       return max_area;
    }
};