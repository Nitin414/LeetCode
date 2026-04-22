1class Solution {
2public:
3    int reverse(int x) {
4        int a=0,b;
5        b=x;
6        while(b!=0)
7        {
8            if(a<-2147483647/10||a>2147483647/10)
9                return 0;
10            a=a*10+(b%10);
11            b=b/10;
12        }
13         
14        return a;
15    }
16};