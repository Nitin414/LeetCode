1class Solution {
2public:
3    bool isPowerOfFour(int n) {
4        long long k=4;
5        if(n==1)
6        {
7            return true;
8        }
9        else if(n<=0)
10        {
11            return false;
12        }
13        while(n>=k)
14        {
15            if(k==n)
16            {
17                return true;
18            }
19            k*=4;
20            if(k>n)
21            {
22                break;
23            }
24        }
25        return false;
26    }
27};