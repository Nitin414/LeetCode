class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        vector<int> arr(50, 0);
        for(int i = lowLimit ; i <= highLimit ; i++)
        {
            int a=i,b=0;
            if(a>0)
            {
                while(a>0)
                {
                    b=b+a%10;
                    a=a/10;
                }
                arr[b]+=1;
            }
            else
            {
                arr[i]+=1;
            }
        }
        int ans = 0;
        for(int x : arr)
            ans = max(ans, x);

        return ans;
    }
};