1class Solution {
2public:
3    int countDigits(int num) {
4        int count=0;
5        int n=num;
6        while(num>0){
7            int temp=num%10;
8            if(n%temp==0){
9            count++;}
10            num/=10;
11
12
13        }
14        return count;
15        
16    }
17};