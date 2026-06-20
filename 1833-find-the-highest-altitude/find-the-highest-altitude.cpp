class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi=0,a=0;
        for(int i=0;i<gain.size();i++)
        {
            a=a+gain[i];
            maxi=max(maxi,a);
        }
        return maxi;
    }
};