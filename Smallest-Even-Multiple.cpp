1class Solution {
2public:
3    int smallestEvenMultiple(int n) {
4        if(n%2==0)
5        {
6            return n;
7        }
8        else
9        {
10            return n*2;
11        }
12    }
13};