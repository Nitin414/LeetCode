1class Solution {
2public:
3    int countSegments(string s) {
4        int count = 0;
5
6        for(int i = 0; i < s.size(); i++)
7        {
8            if(s[i] != ' ' && (i == 0 || s[i-1] == ' '))
9            {
10                count++;
11            }
12        }
13
14        return count;
15    }
16};
17