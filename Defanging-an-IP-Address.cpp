1class Solution {
2public:
3    string defangIPaddr(string address) {
4        string result = "";
5        for(int i= 0;i<address.size();i++)
6        {
7            if(address[i] == '.')
8            {
9                result += "[.]";
10            }
11            else
12            {
13                result += address[i];
14            }
15        }
16        return result;
17    }
18};