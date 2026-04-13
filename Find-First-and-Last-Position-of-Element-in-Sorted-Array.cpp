1class Solution {
2public:
3    vector<int> searchRange(vector<int>& nums, int target) {
4        int n=nums.size();
5        int st=0,end=n-1;
6        int first=-1,last=-1;
7        int mid;
8        //first element
9        while(st<=end){
10            mid=(st+end)/2;
11            if(nums[mid]==target){
12                first=mid;
13                end=mid-1;
14                
15            }
16            else if(target>nums[mid]){
17                st=mid+1;
18            }
19
20            else
21                end=mid-1;
22
23
24        }
25        st=0;
26        end=n-1;
27        //last element
28        while(st<=end){
29            mid=(st+end)/2;
30            if(nums[mid]==target){
31                last=mid;
32                st=mid+1;
33                
34            }
35            else if(target>nums[mid]){
36                st=mid+1;
37            }
38
39            else
40                end=mid-1;
41
42
43        }
44        return {first,last};
45    }
46};