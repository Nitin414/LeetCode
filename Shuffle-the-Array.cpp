1class Solution {
2public:
3    vector<int> shuffle(vector<int>& nums, int n) {
4        vector<int> arr(2*n);
5        int k=0;
6        for(int i=0; i< n;i++)
7        {
8            arr[k]=nums[i];
9            arr[k+1]=nums[n+i];
10            k=k+2;
11        }
12        return arr;
13    }
14};