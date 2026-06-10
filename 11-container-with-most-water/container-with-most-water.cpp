class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int maxi=0,area;
        while(i<j)
        {
            area=min(height[i],height[j])*abs(j-i);
            maxi=max(maxi,area);
            if(height[i]<height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return maxi;
    }
};