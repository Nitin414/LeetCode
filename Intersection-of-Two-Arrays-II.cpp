1class Solution {
2public:
3    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
4        vector<int> nums;
5        vector<bool> used(nums2.size(), false);
6
7        for(int i=0; i<nums1.size();i++)
8        {
9            for(int j =0;j<nums2.size();j++)
10            {
11                if(nums1[i]==nums2[j]&& !used[j])
12                {
13                    nums.push_back(nums1[i]);
14                    used[j] = true;
15                    break;
16                }
17            }
18        }
19        return nums;
20    }
21};