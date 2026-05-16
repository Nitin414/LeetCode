1class Solution {
2public:
3    int hammingWeight(int n) {
4        int count=0;
5        string a;
6        a = bitset<32>(n).to_string();
7        for(int i=0;i<a.size();i++)
8        {
9            if(a[i]=='1')
10            {
11                count++;
12            }
13        }
14        return count;
15    }
16};