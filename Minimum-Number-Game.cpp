1class Solution {
2public:
3    vector<int> numberGame(vector<int>& nums) {
4         sort(nums.begin(),nums.end());
5        for(int i=0;i<nums.size()-1;i+=2){
6            swap(nums[i],nums[i+1]);
7        }
8        return nums;
9    
10    }
11};