1class Solution {
2public:
3    int findDuplicate(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5        for(int i=1;i<nums.size();i++)
6        {
7            if(nums[i-1]==nums[i])
8            {
9                return nums[i];
10            }
11        }
12        return 0;
13    }
14};