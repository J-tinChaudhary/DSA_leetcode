class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        //Optimized approach 
        //Use of two pointer approach
        int left=0,n=numbers.size(),right=n-1;
        while(left<right){
            if(numbers[left]+numbers[right]==target)return {left+1,right+1};
            else if(numbers[left]+numbers[right]>target)right--;
            else left++;
        }
       return{};
    }
};