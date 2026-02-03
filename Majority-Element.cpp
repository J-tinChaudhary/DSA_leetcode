1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        sort(nums.begin(),nums.end());
5        int freq=1;
6        int n=nums.size();
7        if(n==1)
8        return nums[0];
9        for(int i=0;i<n-1;i++){
10            if(nums[i+1]==nums[i]){
11                freq++;
12            }
13            if(freq>(n/2)){
14                return nums[i];
15            }
16            if(nums[i+1]!=nums[i])
17            freq=1;
18
19
20        }
21        return {};
22        
23    }
24};