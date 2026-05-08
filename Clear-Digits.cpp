1class Solution {
2public:
3    string clearDigits(string s) {
4        string ans ="";
5        for(int i=0;i<s.size();i++)
6        {
7            if(isdigit(s[i]))
8            {
9                ans.pop_back();
10            }
11            else
12            {
13                ans += s[i];
14            }
15        }
16        return ans;
17    }
18};