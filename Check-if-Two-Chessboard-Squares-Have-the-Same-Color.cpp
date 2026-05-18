1class Solution {
2public:
3    bool checkTwoChessboards(string coordinate1, string coordinate2) {
4       int a,b;
5        a = (coordinate1[0] - 'a' + 1) + (coordinate1[1] - '0');
6        b = (coordinate2[0] - 'a' + 1) + (coordinate2[1] - '0');
7       if((a%2==0 && b%2==0)||(a%2==1 && b%2==1))
8       {
9        return true;
10       }
11       else return false;
12    }
13};