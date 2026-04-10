1class Solution {
2public:
3    bool detectCapitalUse(string word) {
4        int a=0;
5        for(int i=0;i< word.size();i++)
6        {
7            if (isupper(word[i]))
8            {
9                a++;
10            }
11        }
12        if(a==word.size())
13        {
14            return true;
15        }
16        if(a == 0) return true;           
17        if(a == 1 && isupper(word[0])) return true;
18        else
19        {
20            return false;
21        }
22    }
23};