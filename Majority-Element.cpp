1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        int freq=0,ans=0;
5        //agr same mile too freq ++ ho rhi h
6        //agr diff mile too --
7        //at the end jo majority elsement h uski freq sbse jyada hi rhegi
8        for(int i=0;i<nums.size();i++){
9            if(freq==0)
10            ans=nums[i];
11            if(nums[i]==ans)
12            freq++;
13            else 
14            freq--;
15            
16            
17        }
18        return ans;
19    }
20};