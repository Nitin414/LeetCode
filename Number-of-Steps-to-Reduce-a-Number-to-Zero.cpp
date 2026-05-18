1class Solution {
2public:
3    int numberOfSteps(int num) {
4        int count=0;
5        while(num!=0)
6        {
7            if(num%2==0)
8            {
9                num=num/2;
10                count++;
11            }
12            else
13            {
14                num=num-1;
15                count++;
16            }
17        }
18        return count;
19    }
20};