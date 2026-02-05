1class Solution {
2public:
3    vector<int> constructTransformedArray(vector<int>& nums) {
4        int n=nums.size();
5        vector<int> result(n);
6        for(int i=0;i<n;i++){
7               int newindex = (nums[i] + i) % n;
8            if(newindex<0){
9              newindex+=n;
10            }
11           result[i]=nums[newindex];
12            }
13        
14        return result;
15    }
16};