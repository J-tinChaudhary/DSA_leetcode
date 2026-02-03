1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        int n=nums.size();
5        if(n==1)
6        return nums[0];
7        for(int i=0;i<n;i++){
8        int flag=1;
9            for(int j=i+1;j<n;j++){
10                if(nums[i]==nums[j]){
11                    flag++;
12                }
13                if(flag>(n/2))
14                return nums[i];
15            }
16            
17
18        }
19        return {};
20    }
21};