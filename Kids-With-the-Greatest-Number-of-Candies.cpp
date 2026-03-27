1class Solution {
2public:
3    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
4        vector<bool> arr(candies.size());
5
6        for(int i = 0; i < candies.size(); i++) {
7            bool isGreatest = true;
8
9            for(int j = 0; j < candies.size(); j++) {
10                if(candies[i] + extraCandies < candies[j]) {
11                    isGreatest = false;
12                    break;
13                }
14            }
15
16            arr[i] = isGreatest;
17        }
18
19        return arr;
20    }
21};