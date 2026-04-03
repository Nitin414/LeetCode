1class Solution {
2public:
3    int finalValueAfterOperations(vector<string>& operations) {
4        int X=0;
5        for(int i=0;i<operations.size();i++)
6        {
7            if(operations[i]=="X++"||operations[i]=="++X")
8            {
9                X=X+1;
10            }
11            else
12            {
13                X=X-1;
14            }
15        }
16        return X;
17    }
18};