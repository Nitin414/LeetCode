1class Solution {
2public:
3    void sortColors(vector<int>& nums) {
4        for(int i=0;i<nums.size();i++)
5        {
6            for(int j=i+1;j<nums.size();j++)
7            {
8                if(nums[i]>nums[j])
9                {
10                    swap(nums[i],nums[j]);
11                }
12            }
13        }
14    }
15};