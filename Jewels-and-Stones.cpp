1class Solution {
2public:
3    int numJewelsInStones(string jewels, string stones) {
4        int k =0;
5        for(int i=0;i<stones.size();i++)
6        {
7            for(int j=0;j< jewels.size();j++)
8            {
9                if(stones[i]==jewels[j])
10                {
11                    k++;
12                    break;
13                }
14            }
15        }
16        return k;
17    }
18};