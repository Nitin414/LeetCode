1class Solution {
2public:
3    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
4        int n = matrix.size();
5        int m = matrix[0].size();
6
7        vector<vector<int>> answer = matrix;
8        int a= 0, maxi=0;
9        for(int i=0;i<n;i++)
10        {
11            for(int j=0;j<m;j++)
12            {
13                if(matrix[i][j]==-1)
14                {
15                    a= 0;
16                    maxi=0;
17                    while(a<n)
18                    {
19                        maxi=max(maxi,matrix[a][j]);
20                        a++;
21                    }
22                    answer[i][j]=maxi;
23                }
24                else
25                {
26                    answer[i][j]=matrix[i][j];
27                }
28            }
29        }
30        return answer;
31    }
32};