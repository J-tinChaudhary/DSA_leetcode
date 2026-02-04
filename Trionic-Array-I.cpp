1class Solution {
2public:
3    bool isTrionic(vector<int>& nums) {
4        int n = nums.size();
5        int i = 0;
6
7        while (i+1<n && nums[i] < nums[i + 1]) //increasing sequence
8            i++;
9        if (i == 0 || i == n - 1)
10            return false;
11        
12        while (i+1<n && nums[i] > nums[i + 1]) //decreasing sequence
13            i++;
14        
15        if (i == n - 1) 
16            return false;
17        
18        while (i+1<n && nums[i] < nums[i + 1]) //increasing sequence
19            i++;
20        
21        if (i == n - 1)
22            return true;
23
24    return false;
25    
26    }
27
28};
29