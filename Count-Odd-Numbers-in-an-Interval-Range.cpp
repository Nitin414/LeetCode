1class Solution {
2public:
3    int countOdds(int low, int high) {
4        int k=0;
5        for(int i=low;i<=high;i++)
6        {
7            if(i%2!=0)
8            {
9                k++;
10            }
11        }
12        return k;
13    }
14};