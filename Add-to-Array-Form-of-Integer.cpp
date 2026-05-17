1class Solution {
2public:
3    vector<int> addToArrayForm(vector<int>& num, int k) {
4        int i = num.size() - 1;
5
6        while (i >= 0 && k > 0) {
7            k = k + num[i];
8
9            num[i] = k % 10;
10
11            k = k / 10;
12
13            i--;
14        }
15
16        while (k > 0) {
17            num.insert(num.begin(), k % 10);
18            k = k / 10;
19        }
20
21        return num;
22    }
23};