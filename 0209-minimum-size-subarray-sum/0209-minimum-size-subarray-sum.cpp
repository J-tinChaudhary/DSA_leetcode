class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        //BRUTE FORCE    
    //     int n=nums.size();
    //     int min_len = INT_MAX;

    //     for(int i=0;i<n;i++){
    //         int sum=0;
    //         for(int j=i;j<n;j++){
    //             sum+=nums[j];
    //             if(sum>=target){
    //                 min_len = min(min_len,j-i+1);
    //                 break;
    //             }
    //         }
    //     }
    //     return (min_len== INT_MAX) ? 0 : min_len;
    // }

    int n=nums.size();
    int i=0;
    int j=0;
    int minl=INT_MAX;
    int sum=0;
    while(j<n){
        sum+=nums[j];
        while(sum>=target){
            minl=min(minl,j-i+1);
            sum-=nums[i];
            i++;
        }
        j++;
    }
    return minl==INT_MAX ? 0:minl;  }
};