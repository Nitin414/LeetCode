1class Solution {
2public:
3    int pivotIndex(vector<int>& nums) {
4        vector<int> nums1(nums.size());
5        for(int i=1;i<nums.size();i++)
6        {
7            nums1[0]=nums[0];
8            nums1[i]=nums[i]+nums1[i-1];
9        }
10        for(int i=nums.size()-2;i>=0;i--)
11        {
12            nums[i]=nums[i]+nums[i+1];
13        }
14        for(int i=0;i<nums.size();i++)
15        {
16            int left = (i == 0) ? 0 : nums1[i-1];
17            int right = (i == nums.size()-1) ? 0 : nums[i+1];
18
19            if(left == right)
20            {
21                return i;
22            }
23        }
24        return -1;
25    }
26};