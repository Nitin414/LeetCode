1class Solution {
2public:
3    int countDigits(int num) {
4        int a=0,b;
5        b=num;
6        while(b>0)
7        {
8            int c=b%10;
9            if(num%c==0)
10            {
11                a++;
12            }
13            b=b/10;
14        }
15        return a;
16    }
17};