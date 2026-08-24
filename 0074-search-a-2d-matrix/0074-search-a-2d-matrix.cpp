class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size();
        int top=0,bottom=m-1,row=-1;
        while(top<=bottom)
        {
            int mid=top+(bottom-top)/2;
            if(matrix[mid][0]<=target && matrix[mid][n-1]>=target)
            {
                row=mid;
                break;
            }
            else if(matrix[mid][0]>target)
            {
                bottom=mid-1;
            }
            else
            {
                top=mid+1;
            }
        }
        if(row==-1)
        return false;
        int l=0,r=n-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(matrix[row][mid]==target)
            {
                return true;
            }
            else if(matrix[row][mid]<target)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        return false;
    }
};