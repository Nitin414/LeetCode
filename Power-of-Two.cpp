1class Solution {
2public:
3    bool isPowerOfTwo(int n) {
4        double x;
5        for(int i=0; i<n;i++)
6        {
7            x=pow(2,i);
8            if(n==x)
9            {
10                return true;
11            }
12            else if(x>n)
13            {
14                return false;
15            }
16        }
17        return false;
18    }
19};