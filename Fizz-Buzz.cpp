1class Solution {
2public:
3    vector<string> fizzBuzz(int n) {
4        vector<string>answer(n);
5        for(int i=1;i<=n;i++)
6        {
7            if(i%3==0 && i%5==0)
8            {
9                answer[i-1]="FizzBuzz";
10            }
11            else if(i%3==0)
12            {
13                answer[i-1]="Fizz";
14            }
15            else if(i%5==0)
16            {
17                answer[i-1]="Buzz";
18            }
19            else
20            {
21                answer[i-1] = to_string(i);
22            }
23        }
24        return answer;
25    }
26};