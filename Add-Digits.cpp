1class Solution {
2public:
3    int addDigits(int num) {
4        start:
5        int b=0;
6        while(num>0)
7        {
8            b=b+(num%10);
9            num=num/10;
10        }
11        num=b;
12        if(num>9)
13        {
14            goto start;
15        }
16        return num;
17    }
18};