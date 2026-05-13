1class Solution {
2public:
3    int countEven(int num) {
4        int b,c=0,count=0;
5        for(int i=1;i<=num;i++)
6        {
7            b=i;
8            while(b!=0)
9            {
10                c=c+(b%10);
11                b=b/10;
12            }
13            if(c%2==0)
14            {
15                count++;
16            }
17            c=0;
18        }
19        return count;
20    }
21};