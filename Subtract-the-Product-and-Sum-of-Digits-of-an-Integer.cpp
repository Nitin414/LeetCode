1class Solution {
2public:
3    int subtractProductAndSum(int n) {
4        int a,b=1,c=0;
5        a=n;
6        while(a>0)
7        {
8            b*=a%10;
9            c+=a%10;
10            a=a/10;
11        }
12        return b-c;
13    }
14};