1class Solution {
2public:
3    int countAsterisks(string s) {
4        int k=0;
5        for(int i=0;i<s.size();i++)
6        {
7            if(s[i]=='*')
8            {
9                k++;
10            }
11            if(s[i]=='|')
12            {
13                i++;
14                while(s[i]!='|')
15                {
16                    i++;
17                }
18            }
19        }
20        return k;
21    }
22};