class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        int a=0;
        if(words.size() != s.size())
            return false;
        for(int i=0;i<words.size();i++)
        {
            if(words[i][0]==s[i])
            {
                a++;
            }
            else
            {
                return false;
            }
        }
        if(s.size()==a)
        {
            return true;
        }
        return false;
    }
};