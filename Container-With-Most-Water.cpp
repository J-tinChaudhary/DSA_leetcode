1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int maxwater=0;
5        int n=height.size();
6     /*     BRUTE FORCE  
7      for(int i=0;i<n;i++){
8            for(int j=i+1;j<n;j++){
9                int water=min(height[i],height[j])*(j-i);
10                maxwater=max(maxwater,water);
11            }
12        }
13        return maxwater; */
14
15        int p2=n-1;
16        int p1=0;
17        while(p2>p1){
18            int water=min(height[p1],height[p2])*(p2-p1);
19            maxwater=max(maxwater,water);
20            if(height[p2]<height[p1])
21                p2--;
22            else
23                p1++;
24
25        }
26        return maxwater;
27    }
28};