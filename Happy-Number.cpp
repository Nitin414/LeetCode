1class Solution {
2public:
3    bool isHappy(int n) {
4         set<int> seen;
5        int a,b,c;
6        while(n!=1)
7        {
8            if(seen.count(n)) 
9            {
10                return false;
11            }
12            seen.insert(n);
13            a=n;
14            b=0;
15            while(a!=0)
16            {
17                c=a%10;
18                b+=c*c;
19                a=a/10;
20            }
21            n=b;
22        }
23        return true;
24    }
25};