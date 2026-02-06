1class Solution {
2public:
3    int repeatedNTimes(vector<int>& nums) {
4     /* BRUTE FORCE   
5     int n=nums.size();   
6        for(int i=0;i<n;i++){
7            for(int j=i+1;j<n;j++){
8                if(nums[i]==nums[j])
9                return nums[i];
10            }
11        }
12        return {};*/
13
14         unordered_set<int> st;
15
16        for(int x : nums) {
17            if(st.count(x)) return x;
18            st.insert(x);
19        }
20        return -1;
21    }
22};