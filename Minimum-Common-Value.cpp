1class Solution {
2public:
3    int getCommon(vector<int>& nums1, vector<int>& nums2) {
4      int i=0,j=0;
5      while(i<nums1.size() && j < nums2.size())
6      {
7        if(nums1[i]==nums2[j])
8        {
9           return nums1[i];
10        }
11        else if(nums1[i]>nums2[j])
12        {
13            j++;
14        }
15        else if(nums1[i]<nums2[j])
16        {
17            i++;
18        }
19      }
20     return -1;
21    }
22};