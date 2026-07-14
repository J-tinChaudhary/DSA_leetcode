class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        //BETTER APPROACH USE OF HASHMAP 
        unordered_map<int, int> mpp;
        for (int i = 0; i < numbers.size(); i++) {
            mpp[numbers[i]] = i;
        }
        for (int i = 0; i < numbers.size(); i++) {
            int complement = target - numbers[i];

            if (mpp.find(complement) != mpp.end() && mpp[complement] != i) {
                return {i + 1, mpp[complement] + 1}; 
            }
        }

        return {};
    }
};