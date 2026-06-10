class Solution {
public:
    int lengthOfLastWord(string s) {
        int k=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(isalpha(s[i]))
            {
                k++;
            }
            if(k>=1 && s[i]==' ')
            {
                break;
            }
        }
        return k;
    }
};