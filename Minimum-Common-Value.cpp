1class Solution {
2public:
3    int getCommon(vector<int>& nums1, vector<int>& nums2) {
4      int maxi =0,i=0,j=0;
5      int minx=maxi;
6      while(i<nums1.size() && j < nums2.size())
7      {
8        if(nums1[i]==nums2[j])
9        {
10           return nums1[i];
11        }
12        else if(nums1[i]>nums2[j])
13        {
14            j++;
15        }
16        else if(nums1[i]<nums2[j])
17        {
18            i++;
19        }
20      }
21     return -1;
22    }
23};