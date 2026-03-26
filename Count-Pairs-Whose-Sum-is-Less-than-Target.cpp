1class Solution {
2public:
3    int countPairs(vector<int>& nums, int target) {
4        int a=0;
5        for(int i=0; i<nums.size();i++)
6        {
7            for(int j=i+1;j<nums.size();j++)
8            {
9                if(nums[i] + nums[j] < target)
10                {
11                    a++;
12                }
13            }
14        }
15        return a;
16    }
17};