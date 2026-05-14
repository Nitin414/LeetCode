1class Solution {
2public:
3    int lengthOfLastWord(string s) {
4        int k=0;
5        for(int i=s.size()-1;i>=0;i--)
6        {
7            if(isalpha(s[i]))
8            {
9                k++;
10            }
11            if(k>=1 && s[i]==' ')
12            {
13                break;
14            }
15        }
16        return k;
17    }
18};