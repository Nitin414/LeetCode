class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=10)
            {
                int a=nums[i],b=0;
                while(a>0)
                {
                    b+=a%10;
                    a=a/10;
                }
                nums[i]=b;
                if(nums[i]==i)
                {
                    return i;
                }
            }
            if(nums[i]==i)
            {
                return i;
            }
        } 
        return -1;  
    }
};