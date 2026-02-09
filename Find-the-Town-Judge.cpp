1class Solution {
2public:
3    int findJudge(int n, vector<vector<int>>& trust) {
4        for (int p = 1; p <= n; p++) {
5            int px = 0, xp = 0;
6            for (vector<int>& t : trust) {
7                if (t[0] == p) px++;   // p trusts someone
8                if (t[1] == p) xp++;   // someone trusts p
9            }
10            if (px == 0 && xp == n - 1)
11                return p;
12        }
13        return -1;
14    }
15};
16