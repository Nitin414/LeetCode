1class Solution {
2public:
3    string reverseWords(string s) {
4        int a=0;
5        for(int i=0;i<s.size();i++)
6        {
7            if(s[i]==' ')
8            {
9                reverse(s.begin()+a, s.begin()+i);;
10                a=i+1;
11            }
12        }
13        reverse(s.begin()+a,s.end());
14        return s;
15    }
16};