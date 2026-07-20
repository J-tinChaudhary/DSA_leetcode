class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int ans=0;
        int i=0;
        int j=people.size()-1;
        while(i<=j){
            if(people[i]+people[j]<=limit){
                ans++;
                i++;
                j--;
            }
            else {
                if(people[i]>people[j]){
                    ans++;
                    i++;
                }
                else {
                    ans++;
                    j--;
                }
            }
        }
        return ans;
    }
};