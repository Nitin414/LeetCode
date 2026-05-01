1class Solution {
2public:
3    string getEncryptedString(string s, int k) {
4        int n = s.size();
5        string a(n, ' ');
6        for(int i=0;i<s.size();i++)
7        {
8            a[i] = s[(i + k) % n];
9        }
10        return a;
11    }
12};