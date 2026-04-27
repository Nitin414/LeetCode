1class Solution {
2public:
3    bool isSameAfterReversals(int num) {
4        int a=num,b=0,c;
5        while( a!=0)
6        {
7            b=b*10+(a%10);
8            a=a/10;
9        }
10        a=b;
11        b=0;
12        while( a!=0)
13        {
14            b=b*10+(a%10);
15            a=a/10;
16        }
17        if(num==b)
18        {
19            return true;
20        }
21        else
22        {
23            return false;
24        }
25    }
26};