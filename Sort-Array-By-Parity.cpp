1class Solution {
2public:
3    vector<int> sortArrayByParity(vector<int>& nums) {
4        vector<int> num(nums.size());
5        int even=0,odd=nums.size()-1;
6        for(int i=0;i<nums.size();i++)
7        {
8            if(nums[i]%2==0)
9            {
10                num[even]=nums[i];
11                even++;
12            }
13            else
14            {
15                num[odd]=nums[i];
16                odd--;
17            }
18        }
19        return num;
20    }
21};