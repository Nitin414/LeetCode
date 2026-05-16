1class Solution {
2public:
3    string reverseVowels(string s) {
4        int i=0,j=s.size()-1;
5        while(i<j)
6        {
7            if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') && 
8            (s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'||s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U'))
9            {
10                swap(s[i], s[j]);
11                i++;
12                j--;
13            }
14            else if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&& s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U')
15            {
16                i++;
17            }
18
19            else
20            {
21                j--;
22            }
23        }
24        return s;
25    }
26};