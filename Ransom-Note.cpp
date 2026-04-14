1class Solution {
2public:
3    bool canConstruct(string ransomNote, string magazine) {
4        int k =0;
5        for(int i=0;i<ransomNote.size();i++)
6        {
7            for(int j=0;j<magazine.size();j++)
8            {
9                if(ransomNote[i]==magazine[j])
10                {
11                    k++;
12                    magazine[j] = '#';
13                    break;
14                }
15            }
16        }
17        if(k==ransomNote.size())
18        {
19            return true;
20        }
21        else
22        {
23            return false;
24        }
25    }
26};