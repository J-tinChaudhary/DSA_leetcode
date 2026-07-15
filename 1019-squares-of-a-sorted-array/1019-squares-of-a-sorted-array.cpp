class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        //Divide arr into negative and positive
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }
            else pos.push_back(nums[i]);
        }
        //  If there is only positive numbers
        if(neg.size()==0){
            for(int i=0;i<pos.size();i++){
                pos[i]*=pos[i];
            }
            return pos;
        }
        //  If no positive number is present
        if(pos.size()==0){
            for(int i=0;i<neg.size();i++){
                neg[i]*=neg[i];
            }
            reverse(neg.begin(),neg.end());
            return neg;
        }
        //Taking square of both array
        int n=neg.size();
        int m=pos.size();
        for(int i=0;i<n;i++){
            neg[i]*=neg[i];
        }
        reverse(neg.begin(),neg.end());
        for(int i=0;i<m;i++){
            pos[i]*=pos[i];
        }
        //  If both negitive and positive are present
        //Merge sorted arr
        vector<int> ans;
        int a=0,b=0;
        while(a<m&&b<n){
            if(pos[a]<=neg[b]){
                ans.push_back(pos[a]);
                a++;
            }
            else {
                ans.push_back(neg[b]);
                b++;
            }
        }
        while(b<n){
            ans.push_back(neg[b]);
            b++;
        }
        while(a<m){
            ans.push_back(pos[a]);
            a++;
        }
        return ans;
    }
};