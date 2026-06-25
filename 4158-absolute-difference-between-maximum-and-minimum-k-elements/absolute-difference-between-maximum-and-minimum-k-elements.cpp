class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        if(nums.size()<=1)
        {
            return 0;
        }
        int min=0,max=0,a=0,b=nums.size()-1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<k;i++)
        {
            min=min+nums[i];
        }
        while(a<k)
        {
            max=max+nums[b];
            a++;
            b--;
        }
        return abs(max-min);
    }
};