1class Solution {
2public:
3    vector<int> sortedSquares(vector<int>& nums) {
4        vector<int> newArr(nums.begin(), nums.end());
5
6        for(int i=0;i<newArr.size();i++){
7            newArr[i]=newArr[i]*newArr[i];
8        }
9sort(newArr.begin(),newArr.end());
10return newArr;
11    }
12};