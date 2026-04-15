1class Solution {
2public:
3    int firstUniqChar(string s) {
4        vector<int> freq(26, 0);
5        for(int i = 0; i < s.size(); i++)
6        {
7            freq[s[i] - 'a']++;
8        }
9        for(int i = 0; i < s.size(); i++)
10        {
11            if(freq[s[i] - 'a'] == 1)
12                return i;
13        }
14
15        return -1;
16    }
17};