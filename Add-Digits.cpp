1class Solution {
2public:
3    int addDigits(int num) {
4        while (num >= 10) {   
5            int sum = 0;
6
7            while (num > 0) {
8                sum += num % 10;
9                num /= 10;
10            }
11
12            num = sum;
13        }
14        return num;
15    }
16};
17