1class Solution {
2public:
3    bool isSubsequence(string s, string t) {
4        int count=0,a=0,j;
5        
6       for(int i=0;i<s.size();i++)
7       {
8        j=a;
9        for(j=a;j<t.size();j++)
10        {
11            if(s[i]==t[j])
12            {
13                count++;
14                a=j+1;
15                break;
16            }
17            if(count==s.size())
18            {
19                return true;
20            }
21        }
22       } 
23        if(count == s.size())
24        {
25            return true;
26        }
27       return false;
28    }
29};