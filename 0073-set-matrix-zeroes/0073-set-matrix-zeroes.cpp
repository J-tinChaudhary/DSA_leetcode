class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> rw;
        vector<int> co;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    rw.push_back(i);
                    co.push_back(j);
                }
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (find(rw.begin(), rw.end(), i) != rw.end() ||
                    find(co.begin(), co.end(), j) != co.end()) {
                    matrix[i][j] = 0;
                }
            }
        }
        
    }
};