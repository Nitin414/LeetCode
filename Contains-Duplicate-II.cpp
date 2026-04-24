1class Solution {
2public:
3    bool containsNearbyDuplicate(vector<int>& nums, int k) {
4       for(int i=0;i<nums.size();i++)
5       {
6            int j=i+1;
7            while(j-i<=k)
8            {
9                if(j < nums.size() &&nums[i]==nums[j])
10                {
11                return true;
12                }
13                j++;
14            }
15       }
16       return false; 
17    }
18};