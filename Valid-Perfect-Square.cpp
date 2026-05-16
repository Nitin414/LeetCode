1class Solution {
2public:
3    bool isPerfectSquare(int num) {
4        long long a;
5        if(num<=0) return false;
6        if(num==1) return true;
7        for(long i=1;i<num;i++)
8        {
9            a=i*i;
10            if(a==num)
11            {
12                return true;
13            }
14        }
15        return false;
16    }
17};