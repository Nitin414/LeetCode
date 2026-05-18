1class Solution {
2public:
3    string reverseByType(string s) {
4        int i=0,j=s.size()-1;
5        while(i<j)
6        {
7            if(islower(s[i]) && islower(s[j]))
8            {
9                swap(s[i],s[j]);
10                i++;
11                j--;
12            }
13            else if(!islower(s[i]))
14            {
15                i++;
16            }
17            else if(!islower(s[j]))
18            {
19                j--;
20            }
21        }
22        i=0;
23        j=s.size()-1;
24        while(i<j)
25        {
26            if(!isalnum(s[i]) && !isalnum(s[j]))
27            {
28                swap(s[i],s[j]);
29                i++;
30                j--;
31            }
32            else if(isalnum(s[i]))
33            {
34                i++;
35            }
36            else if(isalnum(s[j]))
37            {
38                j--;
39            }
40        }
41        return s;
42    }
43};