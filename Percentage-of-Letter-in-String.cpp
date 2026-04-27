1class Solution {
2public:
3    int percentageLetter(string s, char letter) {
4        
5        double per, k=0;
6        for(int i=0;i<s.size();i++)
7        { 
8        if(s[i]==letter)
9        {
10            k++;
11        }
12        }
13        per = k/s.size();
14        per =per*100;
15        return per;
16    }
17};