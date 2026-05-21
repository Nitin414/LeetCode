1class Solution {
2public:
3    vector<int> dailyTemperatures(vector<int>& temperatures) {
4
5        vector<int> answer(temperatures.size());
6
7        for(int i=0;i<temperatures.size();i++)
8        {
9            if(i > 0 && temperatures[i] == temperatures[i-1])
10            {
11                answer[i] = max(0, answer[i-1]-1);
12                continue;
13            }
14
15            for(int j=i+1;j<temperatures.size();j++)
16            {
17                if(temperatures[j] > temperatures[i])
18                {
19                    answer[i] = j - i;
20                    break;
21                }
22            }
23        }
24
25        return answer;
26    }
27};