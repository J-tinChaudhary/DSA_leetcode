1class Solution {
2public:
3    double myPow(double x, int n) {
4        long long N = n;   // avoid overflow for INT_MIN
5        double ans = 1.0;
6        
7        if (N < 0) {
8            N = -N;
9            x = 1 / x;
10        }
11        
12        while (N > 0) {
13            if (N & 1) {       // if odd
14                ans *= x;
15            }
16            x *= x;           // square
17            N >>= 1;          // N = N / 2
18        }
19        
20        return ans;
21    }
22};
23