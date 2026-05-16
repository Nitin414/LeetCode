1class Solution {
2public:
3    int reverseBits(int n) {
4        string a;
5        a = bitset<32>(n).to_string();
6        reverse(a.begin(),a.end());
7        int num = stoi(a, 0, 2);
8        return num;
9    }
10};