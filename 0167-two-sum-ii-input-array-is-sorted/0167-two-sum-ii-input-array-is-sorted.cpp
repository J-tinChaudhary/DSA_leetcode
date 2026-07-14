class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        //BETTER APPROACH USE OF MAP
        unordered_map<int, int> mpp;

        for (int i = 0; i < numbers.size(); i++) {
            int complement = target - numbers[i];

            if (mpp.find(complement) != mpp.end()) {
                return {mpp[complement] + 1, i + 1};
            }

            mpp[numbers[i]] = i;
        }

        return {};
    }
};