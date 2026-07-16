class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int maxdiff = INT_MAX;
        int n = nums.size();
        int ans = 0;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 2; i++) {
            int right = n - 1;
            int left = i + 1;
            int sum = target - nums[i];
            while (left < right) {
                int s = nums[left] + nums[right];
                int diff = abs(s - sum);
                if (s == sum) {
                    return s + nums[i];
                 
                }
                if (s < sum) {
                    if (diff < maxdiff) {
                        ans = nums[i] + nums[left] + nums[right];
                        maxdiff = diff;
                    }
                    left++;
                } else {
                    if (diff < maxdiff) {
                        ans = nums[i] + nums[left] + nums[right];
                        maxdiff = diff;
                    }
                    right--;
                }
            }
        }
        return ans;
    }
};