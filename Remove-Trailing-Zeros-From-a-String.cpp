1class Solution {
2public:
3    string removeTrailingZeros(string num) {
4        for(int i=num.size()-1;i>=0;i--)
5        {
6           if(num[i]=='0')
7           {
8                num.pop_back();
9           } 
10           else
11               return num;           
12        }
13        return num;
14    }
15};