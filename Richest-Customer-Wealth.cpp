1class Solution {
2public:
3    int maximumWealth(vector<vector<int>>& accounts) {
4        int paisa=0;
5        int n=accounts.size();
6        int m=accounts[0].size();
7        for(int i=0;i<n;i++){
8            int wealth=0;
9            for(int j=0;j<m;j++){
10                    wealth+=accounts[i][j];
11                    paisa=max(paisa,wealth);
12            }
13        }
14        return paisa;
15    }
16};