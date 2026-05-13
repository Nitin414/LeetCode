1class Solution {
2public:
3    vector<int> findWordsContaining(vector<string>& words, char x) {
4        vector<int> height;
5        for(int i=0;i<words.size();i++)
6        {
7            for(int j=0;j<words[i].size();j++)
8            {
9                if(words[i][j]==x)
10                {
11                    height.push_back(i);
12                    break;
13                }
14            }
15        }
16        return height;
17    }
18};