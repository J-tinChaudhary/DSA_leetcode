1class Solution {
2public:
3    void sortColors(vector<int>& nums) {
4int n=nums.size();
5int c0=0,c1=0,c2=0;
6for(int i=0;i<n;i++){
7    if(nums[i]==0)c0++;
8    else if(nums[i]==1)c1++;
9    else c2++;
10}
11int ind=0;
12    for(int i=0;i<c0;i++){
13        nums[ind++]=0;
14        
15    }
16    for(int j=0;j<c1;j++){
17        nums[ind++]=1;
18       
19    }
20    for(int k=0;k<c2;k++){
21        nums[ind++]=2;
22     
23    }
24        
25    }
26};