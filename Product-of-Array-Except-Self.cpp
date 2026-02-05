1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4        vector<int> answer;
5        int n=nums.size();
6        for(int i=0;i<n;i++){
7            int ans=1;
8            for(int j=0;j<n;j++){
9                if(i!=j){
10                    ans*=nums[j];
11                }
12            }
13            answer.push_back(ans);
14        }
15        return answer;
16    }
17};