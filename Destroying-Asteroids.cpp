1class Solution {
2public:
3    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
4        long long currmass=mass;
5        sort(asteroids.begin(),asteroids.end());
6        for(int i=0;i<asteroids.size();i++)
7        {
8            if(asteroids[i]<=currmass)
9            {
10                currmass+=asteroids[i];
11            }
12            else return false;
13        }
14        return true;
15    }
16};