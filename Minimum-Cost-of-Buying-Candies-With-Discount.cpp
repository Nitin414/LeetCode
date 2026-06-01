1class Solution {
2public:
3    int minimumCost(vector<int>& cost) {
4        int a=0,k=0;
5        sort(cost.begin(),cost.end());
6        for(int i=cost.size()-1;i>=0;i--)
7        {
8            k++;
9            if(k<=2)
10            {
11                a+=cost[i];
12            }
13            else
14            {
15                k=0;
16            }
17        }
18        return a;
19    }
20};