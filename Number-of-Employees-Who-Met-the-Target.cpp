1class Solution {
2public:
3    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
4        int count=0;
5        for(int i=0;i<hours.size();i++){
6            if(hours[i]>=target)
7                count++;
8        }   return count;
9        
10    }
11};