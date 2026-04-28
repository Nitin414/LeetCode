1class Solution {
2public:
3    int prefixCount(vector<string>& words, string pref) {
4        int k,count =0;
5        for(int i=0;i<words.size();i++)
6        {
7            if(words[i].size() < pref.size()) continue;
8            k=0;
9            for(int j=0;j<pref.size();j++)
10            {
11                if(words[i][j]==pref[j])
12                {
13                    k++;
14                }
15            }
16            if(k==pref.size())
17            {
18                count++;
19            }
20        }
21        return count;
22    }
23};