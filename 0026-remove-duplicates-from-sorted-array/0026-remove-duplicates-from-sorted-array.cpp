class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        //OPTIMIZED APPROACH 
        //TWO POINTER 
        int i=0,n=nums.size(),j=1;
        int ans=1;
        while(j<n){
            if(nums[i]!=nums[j]){
                nums[i+1]=nums[j];
                i++;
                ans++;
            }
                j++;

        }
        return ans;
    }
};