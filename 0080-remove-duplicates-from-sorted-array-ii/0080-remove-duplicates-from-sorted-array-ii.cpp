class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //TWO POINTER 
        int i=2,j=2;
        int n=nums.size();
        if(nums.size()<=2){
            return nums.size();
        }
            while(i<n){
                if(nums[i]!=nums[j-2]){
                    nums[j]=nums[i];
                    j++;
                 
                }
                i++;
            }

        
        return j;
    }
};