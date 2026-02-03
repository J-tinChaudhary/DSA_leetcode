1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4       
5    /* 
6    BRUTE FORCE APPROACH
7       int max_sum= INT_MIN;
8        int n=nums.size();
9        for(int start=0;start<n;start++){
10            for(int end =start;end<n;end++){
11                 int current_sum=0;
12                for(int mid=start;mid<=end;mid++){
13                    current_sum+=nums[mid];
14max_sum= max(max_sum,current_sum);
15                }
16            }
17        }
18        return max_sum; */
19
20
21        /*
22        BETTER APPROACH 
23
24             int max_sum= INT_MIN;
25        int n=nums.size();
26        for(int start=0;start<n;start++){
27                 int current_sum=0;
28            for(int end =start;end<n;end++){
29                current_sum+=nums[end];
30                max_sum= max(max_sum,current_sum);
31                }
32                }
33                return max_sum; */
34
35 int max_sum= INT_MIN;
36        int n=nums.size();
37        int curr_sum=0;
38        for(int start=0;start<n;start++){
39            curr_sum+=nums[start];
40            max_sum= max(max_sum,curr_sum);
41            if(curr_sum<0){
42                curr_sum=0;
43            }
44        }
45return max_sum;
46    }
47};