1class Solution {
2public:
3    int mostWordsFound(vector<string>& sentences) {
4        int a=1, maxi=1;
5        for(int i=0;i<sentences.size();i++)
6        {
7            a=1;
8           for(int j=0;j<sentences[i].size();j++)
9           {
10            if(sentences[i][j]==' ')
11            {
12                a++;
13                maxi=max(maxi,a);
14            }
15           }
16        }
17        return maxi;
18    }
19};