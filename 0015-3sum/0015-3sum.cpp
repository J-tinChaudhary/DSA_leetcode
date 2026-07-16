class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //We use two pointer method
        //we use two sum here for multiple i and with duplicates
        vector<vector<int>> ans;
        //sorting bcs two sum
        sort(nums.begin(),nums.end());
        //a+b+c=0 -> a+b=-c; this is main logic
        for(int i=0;i<nums.size()-2;i++){
            if(i>0&&nums[i]==nums[i-1])continue;//duplicacy in i
            int left=i+1;
            int right=nums.size()-1;
            int sum= -nums[i];
            //handling duplicacy+normal two sum
            while(left<right){
                int s=nums[left]+nums[right];
                if(s==sum){
                    ans.push_back({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                    while(left<nums.size() && nums[left]==nums[left-1]){
                        left++;
                    }
                    while(right>0&&nums[right]==nums[right+1]){
                        right--;
                    }
                }
                else if(s<sum){
                    left++;
                }
                else right--;
            }

        }
        return ans;

        
    }
};