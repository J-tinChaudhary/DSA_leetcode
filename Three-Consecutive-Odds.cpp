1class Solution {
2public:
3    bool threeConsecutiveOdds(vector<int>& arr) {
4        int count=0;
5        int n=arr.size();
6        for(int i=0;i<n;i++){
7            if(arr[i]%2==1)
8                count++;
9            else
10             count=0;
11             if(count==3)
12             return true;
13        }
14        return false;
15    }
16};