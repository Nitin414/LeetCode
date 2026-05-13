1class Solution {
2public:
3    int maximumWealth(vector<vector<int>>& accounts) {
4        int maxi=0,wealth=0;
5        for(int i=0;i<accounts.size();i++)
6        {
7            for(int j=0;j<accounts[i].size();j++)
8            {
9                wealth=wealth+(accounts[i][j]);
10            }
11            maxi=max(maxi,wealth);
12            wealth=0;
13        }
14        return maxi;
15    }
16};