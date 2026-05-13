1class Solution {
2public:
3    int sumOfMultiples(int n) {
4        int c=0;
5        for(int i=1;i<=n;i++)
6        {
7            if(i%3==0||i%5==0||i%7==0)
8            {
9                c=c+i;
10            }
11        }
12        return c;
13    }
14};