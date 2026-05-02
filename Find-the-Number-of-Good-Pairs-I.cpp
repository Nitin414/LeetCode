1class Solution {
2public:
3    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
4        int a=0;
5        for(int i=0;i<nums1.size();i++)
6        {
7            for(int j=0;j< nums2.size();j++)
8            {
9                if(nums1[i] % (nums2[j]*k)==0)
10                {
11                    a++;
12                }
13            }
14        }
15        return a;
16    }
17};