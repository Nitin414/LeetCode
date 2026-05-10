1class Solution {
2public:
3    int sumOfTheDigitsOfHarshadNumber(int x) {
4        int a, b=0,c;
5        a=x;
6        while(a>0)
7        {
8            c=a%10;
9            b=b+c;
10            a=a/10;
11        }
12        if(x%b==0)
13        {
14            return b;
15        }
16        else
17           return -1;
18    }
19};