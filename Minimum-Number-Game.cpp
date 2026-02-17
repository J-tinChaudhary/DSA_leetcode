1class Solution {
2public:
3    vector<int> numberGame(vector<int>& nums) {
4        vector<int> arr(nums.begin(),nums.end());
5        sort(arr.begin(),arr.end());
6        for(int i=0;i<arr.size()-1;i+=2){
7            swap(arr[i],arr[i+1]);
8        }
9        return arr;
10    }
11};