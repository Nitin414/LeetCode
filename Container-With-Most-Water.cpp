1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int i=0,j=height.size()-1;
5        int maxi=0,area;
6        while(i<j)
7        {
8            area=min(height[i],height[j])*abs(j-i);
9            maxi=max(maxi,area);
10            if(height[i]<height[j])
11            {
12                i++;
13            }
14            else
15            {
16                j--;
17            }
18        }
19        return maxi;
20    }
21};