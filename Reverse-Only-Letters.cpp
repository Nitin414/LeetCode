1class Solution {
2public:
3    string reverseOnlyLetters(string s) {
4        int i=0,j=s.size()-1;
5        while(i<j)
6        {
7            if(isalpha(s[i]) && isalpha(s[j]))
8            {
9                swap(s[i],s[j]);
10                i++;
11                j--;
12            }
13            else if(!isalpha(s[i]))
14            {
15                i++;
16            }
17            else j--;
18        }
19        return s;
20    }
21};