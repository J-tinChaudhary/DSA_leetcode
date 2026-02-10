1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int temp = 0;
5        int n = prices.size();
6        for (int i = 1; i < n; i++) {
7           
8                if (prices[i] > prices[i-1]) {
9                     temp += prices[i]-prices[i-1];   
10            }
11        }
12        return temp;
13    }
14};