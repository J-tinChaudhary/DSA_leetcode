1class Solution {
2public:
3    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
4       vector<int> arr;
5       int median;
6        int n1=nums1.size(),n2=nums2.size();
7        int p1=0,p2=0;
8        while(p1<n1 && p2<n2){
9            if(nums1[p1]<nums2[p2]){
10                arr.push_back(nums1[p1++]);
11                
12            }
13            else{
14                arr.push_back(nums2[p2++]);
15               
16            }
17        }
18        while (p1 < n1) arr.push_back(nums1[p1++]);
19        while (p2 < n2) arr.push_back(nums2[p2++]);
20        
21        if(arr.size()%2==1){
22            median=arr.size()/2;
23            return arr[median];
24        }
25        else {
26            median=arr.size()/2;
27            return (arr[median]+arr[median-1])/2.0;
28
29        }
30        
31    }
32};