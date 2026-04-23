1class Solution {
2public:
3    vector<int> twoSum(vector<int>& numbers, int target) {
4        int j=numbers.size()-1,i=0;
5        while(i<numbers.size())
6        {
7            if(numbers[i]+numbers[j]==target)
8            {
9                return {i+1,j+1};
10            }
11            else if(numbers[i]+numbers[j]>target)
12            {
13                j--;
14            }
15            else
16            {
17                i++;
18            }
19        }
20        return {};
21    }
22};