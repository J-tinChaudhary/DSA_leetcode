class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        int i=(start[0]+start[1])%2;
        int j=(target[0]+target[1])%2;
        if(i==j)return true;
        else return false;
        
    }
};