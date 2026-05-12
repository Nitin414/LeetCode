1class Solution {
2public:
3    int findPermutationDifference(string s, string t) {
4        int a=0;
5        for(int i=0;i<s.size();i++)
6        {
7            for(int j=0;j<t.size();j++)
8            {
9                if(s[i]==t[j])
10                {
11                    a=a+abs(i-j);
12                }
13            }
14        }
15        return a;
16    }
17};