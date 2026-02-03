1class Solution {
2public:
3    void sortColors(vector<int>& nums) {
4        int st=0,mid=0,end=nums.size()-1;
5        while(mid<=end){
6            if(nums[mid]==0){
7                swap(nums[st],nums[mid]);
8                st++;
9                mid++;
10            }
11            else if(nums[mid]==2){
12                swap(nums[mid],nums[end]);
13                  end--;  
14            }
15            else 
16            mid++;
17        }
18    }
19};