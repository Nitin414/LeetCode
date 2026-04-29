1class Solution {
2public:
3    int differenceOfSum(vector<int>& nums) {
4        int ele=0,num=0;
5        for(int i=0;i<nums.size();i++)
6        {
7            ele=ele+nums[i];
8            if(nums[i]>9)
9            {
10                int a=nums[i];
11                while(a!=0)
12                {
13                    num=num+a%10;
14                    a=a/10;
15                }
16            }
17            else
18            {
19                num=num+nums[i];
20            }
21        }
22        return abs(ele-num);
23    }
24};