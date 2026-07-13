class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n=nums.size()/2;
        for(int i=0;i<nums.size();i++){
            if(i!=n && nums[n]==nums[i])
            return false;
        }
        return true;
    }
};