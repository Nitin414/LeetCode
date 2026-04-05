1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int k = 0;
5        int maxi = 0;
6
7        for(int i = 0; i < nums.size(); i++)
8        {
9            if(nums[i] == 1)
10            {
11                k++;
12                maxi = max(maxi, k);
13            }
14            else
15            {
16                k = 0;
17            }
18        }
19
20        return maxi;
21    }
22};