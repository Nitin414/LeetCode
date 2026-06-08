class Solution {
public:
    int maxProduct(int n) {
        vector<int> digits;
        int pro;
        while(n!=0)
        {
            digits.push_back(n%10);;
            n=n/10;
        }
        int m=digits.size();
        sort(digits.begin(),digits.end());        
        pro=digits[m-1]*digits[m-2];
        return pro;
    }
};