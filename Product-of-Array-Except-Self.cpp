1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4
5        int n = nums.size();
6
7        vector<int> answer(n, 1);
8
9        int prefix = 1;
10
11        for(int i = 0; i < n; i++)
12        {
13            answer[i] = prefix;
14            prefix *= nums[i];
15        }
16
17        int suffix = 1;
18
19        for(int i = n - 1; i >= 0; i--)
20        {
21            answer[i] *= suffix;
22            suffix *= nums[i];
23        }
24
25        return answer;
26    }
27};