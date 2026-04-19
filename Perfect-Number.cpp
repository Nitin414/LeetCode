1class Solution {
2public:
3    bool checkPerfectNumber(int num) {
4        int nums =0;
5        for(int i=1; i<num/2+1;i++)
6        {
7            if(num%i==0)
8            {
9                nums +=i;
10            }
11        }
12        if(num==nums)
13        {
14            return true;
15        }
16        else
17        {
18            return false;
19        }
20    }
21};