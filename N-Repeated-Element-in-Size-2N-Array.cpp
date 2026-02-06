1class Solution {
2public:
3    int repeatedNTimes(vector<int>& nums) {
4        int n=nums.size();
5        for(int i=0;i<n;i++){
6            for(int j=i+1;j<n;j++){
7                if(nums[i]==nums[j])
8                return nums[i];
9            }
10        }
11        return {};
12    }
13};