1class Solution {
2public:
3    string triangleType(vector<int>& nums) {
4        if(nums[0]+ nums[1] <= nums[2] || nums[1] + nums[2] <= nums[0] || nums[0] + nums[2] <= nums[1]) {
5            return "none";
6        }
7
8       if(nums[1]==nums[2]&& nums[2]==nums[0])
9       {
10        return "equilateral";
11       } 
12       else if(nums[1]==nums[2]||nums[2]==nums[0]||nums[0]==nums[1])
13       {
14        return "isosceles";
15       }
16       else
17       {
18        return "scalene";
19       }
20    }
21};