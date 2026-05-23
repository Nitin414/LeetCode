1class Solution {
2public:
3    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
4        int count=0;
5        for(int i=0;i<flowerbed.size();i++)
6        {
7        if(flowerbed[i] == 0 &&
8               (i == 0 || flowerbed[i - 1] == 0) &&
9               (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0))
10            {
11                flowerbed[i] = 1;
12                count++;
13            }
14        }
15        return count >= n;
16    }
17};