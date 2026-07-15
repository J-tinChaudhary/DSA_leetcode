class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //USING two pointer
        vector<int>ans;
        int i=0,j=0;
        while(i<m && j<n){
            //checck for smaller digit
            if(nums1[i]<=nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }
            else{
                ans.push_back(nums2[j]);
                j++;
            }
        }
        while(j<n){
            //when first arr is complete traverse
            ans.push_back(nums2[j]);
            j++;
        }
        while(i<m){
            //if second arr is completely traversed
            ans.push_back(nums1[i]);
            i++;
        }
        for(int i=0;i<m+n;i++){
            //copying back to nums1
            nums1[i]=ans[i];
        }
    }
};