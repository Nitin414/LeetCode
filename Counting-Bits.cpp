1class Solution {
2public:
3    vector<int> countBits(int n) {
4        vector<int> arr;
5        for(int i=0;i<=n;i++)
6        {
7            int a=0;
8            int b=i;
9            while(b!=0)
10            {
11                if(b%2==1)
12                {
13                    a++;
14                }
15                b=b/2;
16            }
17            arr.push_back(a);
18        }
19        return arr;
20    }
21};