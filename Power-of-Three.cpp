1class Solution {
2public:
3    bool isPowerOfThree(int n) {
4        long a=1;
5        if(n<=0) return false;
6        if(n==1) return true;
7        while(n!=0)
8        {
9            a=a*3;
10            if(n==a)
11            {
12                return true;
13            }
14            else if(a>n)
15            {
16                return false;
17            }
18        }
19        return false;
20    }
21};