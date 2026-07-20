class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int low=0;
        int high=k-1;
        double avg=0;
        double sum=0;
        double res=INT_MIN;
        for(int i=0;i<=high;i++){
                sum+=nums[i];
                avg=sum/k;
                res=avg;
        }
        while(high<nums.size()){

            sum-=nums[low];
            low++;
            high++;
            if(high==nums.size())break;
            else{

            sum+=nums[high];
            avg=sum/k;
            }
            res=max(res,avg);

        }
        return res;;
    }
};