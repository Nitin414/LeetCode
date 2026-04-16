1class Solution {
2public:
3    int countOdds(int low, int high) {
4        int k;
5        k=(high-low);
6        if(k==1)
7        {
8            return 1;
9        }
10        else if(high%2==1||low%2==1)
11        {
12            return k/2+1;
13        }
14        else
15        {
16            return k/2;
17        }
18    }
19};