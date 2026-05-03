1class Solution {
2public:
3    char findTheDifference(string s, string t) {
4        sort(s.begin(),s.end());
5        sort(t.begin(), t.end());
6        for(int i=0;i<s.size();i++)
7        {
8            if(s[i]!=t[i])
9            {
10                return t[i];
11            }
12            if(i==s.size()-1)
13            {
14                return t[i+1];
15            }
16        }
17        return t[s.size()];
18    }
19};