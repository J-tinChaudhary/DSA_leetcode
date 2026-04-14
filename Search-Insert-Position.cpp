1class Solution {
2public:
3    int searchInsert(vector<int>& nums, int target) {
4        int n=nums.size();
5        int st=0,end=n-1,mid,index=n;
6        while(st<=end){
7            mid=st+(end-st)/2;
8            if(nums[mid]==target){
9                    return mid;
10            }
11            else if(nums[mid]<target)
12                st=mid+1;
13            else{
14                    index=mid;
15                end=mid-1;
16        }}
17        return index;
18    }
19};