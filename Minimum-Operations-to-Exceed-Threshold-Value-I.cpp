1class Solution {
2public:
3    int minOperations(vector<int>& nums, int k) {
4        int a=0;
5        for(int i=0;i<nums.size();i++)
6        {
7            if(k>nums[i])
8            {
9                a++;
10            }
11        }
12        return a;
13    }
14};