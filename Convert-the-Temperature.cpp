1class Solution {
2public:
3    vector<double> convertTemperature(double celsius) {
4        vector<double> nums(2);
5        nums[0]= celsius + 273.15;
6        nums[1]=  (celsius * 1.80)+ 32.00;
7        return nums;
8    }
9};