1class Solution {
2public:
3    bool isPalindrome(string s) {
4        int i=0, j=s.size()-1;
5        while(i<j)
6        {
7            if(!isalnum(s[i]))
8            {
9                i++;
10                continue;
11            }
12            else if(!isalnum(s[j]))
13            {
14                j--;
15                continue;
16            }
17            if(tolower(s[i]) != tolower(s[j]))
18            {
19                return false;
20            }
21            i++;
22            j--;
23        }
24        return true;
25    }
26};