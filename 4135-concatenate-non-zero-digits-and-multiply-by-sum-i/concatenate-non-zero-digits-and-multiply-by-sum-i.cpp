class Solution {
public:
    long long sumAndMultiply(int n) {
        long long rev=0, out=0;
        int a=0,sum=0;
        a=n;
        while(a>0)
        {
            if(a % 10 != 0)
            {
                sum=sum+(a%10);
                out=out*10 +(a%10);
            }
            a=a/10;
        }
        
        while (out > 0) {
            rev = rev * 10 + out % 10;
            out /= 10;
        }
        return rev*sum;
    }
};