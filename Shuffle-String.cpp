1class Solution {
2public:
3    string restoreString(string s, vector<int>& indices) {
4        vector<char> nums(indices.size());
5        for(int i=0; i< indices.size();i++)
6        {
7            nums[indices[i]] = s[i];
8        }
9        return string(nums.begin(),nums.end());
10    }
11};