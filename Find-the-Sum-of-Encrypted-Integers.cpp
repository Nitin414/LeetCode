1class Solution {
2public:
3    int sumOfEncryptedInt(vector<int>& nums) {
4       int a=0,b,maxi=0,c,k=0;
5       for(int i=0;i<nums.size();i++)
6       {
7        maxi=0;
8        if(nums[i]>9)
9        {
10            b=nums[i];
11            {
12                while(b>0)
13                {
14                    c=b%10;
15                    maxi=max(maxi,c);
16                    b=b/10;
17                    k++;
18                }
19                b=0;
20                while(k!=0)
21                {
22                    b=b*10+maxi;
23                    k--;
24                }
25            }
26            a=a+b;
27        }
28        else
29        {
30            a=a+nums[i];
31        }
32       } 
33       return a;
34    }
35};