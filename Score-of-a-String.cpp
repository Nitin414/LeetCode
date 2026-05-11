1class Solution {
2public:
3    int scoreOfString(string s) {
4        int a=0;
5        for(int i=1;i<s.size();i++)
6        {
7            a=a+abs(int(s[i-1])-int(s[i]));
8        }
9        return a;
10    }
11};