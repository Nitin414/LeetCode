1class Solution {
2public:
3    vector<int> transformArray(vector<int>& nums) {
4        for(int i=0;i<nums.size();i++)
5        {
6            if(nums[i]%2==0)
7            {
8                nums[i]=0;
9            }
10            else
11            {
12                nums[i]=1;
13            }
14        }
15        sort(nums.begin(),nums.end());
16        return nums;
17    }
18};