1class Solution {
2public:
3    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
4        int i,count =0;
5        if(ruleKey=="type")
6        {
7            i=0;
8        }
9        else if(ruleKey=="color")
10        {
11            i=1;
12        }
13        else i=2;
14        for(int j=0;j<items.size();j++)
15        {
16            if(ruleValue==items[j][i])
17            {
18                count++;
19            }
20        }
21        return count;
22    }
23};