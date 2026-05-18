1class Solution {
2public:
3    vector<int> sortArrayByParityII(vector<int>& nums) {
4        vector<int> num1(nums.size());
5        int even =0,odd=1;
6        for(int i=0;i<nums.size();i++)
7        {
8            if(nums[i]%2==0)
9            {
10                num1[even]=nums[i];
11                even+=2;
12            }
13            else
14            {
15                num1[odd]=nums[i];
16                odd+=2;
17            }
18        }
19        return num1;
20    }
21};