1class Solution {
2public:
3    void rotate(vector<vector<int>>& matrix) {
4        int n = matrix.size();
5        vector<vector<int>> nums(n, vector<int>(n));
6        for(int i=0;i<matrix.size();i++)
7        {
8            for(int j=0;j<matrix[i].size();j++)
9            {
10                nums[j][n-i-1]=matrix[i][j];
11            }
12        }
13        matrix=nums;
14    }
15};