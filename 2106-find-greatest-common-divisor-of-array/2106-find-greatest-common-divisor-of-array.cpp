class Solution {
public:
    int findGCD(vector<int>& nums) {
        int gcd=1;
        int mi=*min_element(nums.begin(),nums.end());
        int mx=*max_element(nums.begin(),nums.end());
        for(int i=1;i<=mi;i++){
            if(mi%i==0 && mx%i==0){
                gcd=max(gcd,i);
            }
        }
        return gcd;
    }
};