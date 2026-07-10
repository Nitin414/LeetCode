class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> out;
        int a,b=0,e=0;
        a=n;
        while(a!=0)
        {
            a=a/10;
            b++;
        }
        while(n!=0)
        {
            int x,c=0;
            x=n%10;
            n=n/10;
            while(c<e)
            {
                x=x*10;
                c++;
            }
            if(x>0)
            {
                out.push_back(x);
            }
            e++;
            if(e==b)
            {
                break;
            }
        }
        reverse(out.begin(),out.end());
        return out;
    }
};