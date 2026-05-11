1class Solution {
2public:
3    int scoreOfString(string s) {
4        int a=0;
5        if(s.size()==1)
6        {
7            return int(s[0]);
8        }
9        for(int i=1;i<s.size();i++)
10        {
11            a=a+abs(int(s[i-1])-int(s[i]));
12        }
13        return a;
14    }
15};