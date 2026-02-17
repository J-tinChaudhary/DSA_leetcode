1class Solution {
2public:
3    bool checkIfPangram(string sentence) {
4        unordered_set<int> st(sentence.begin(),sentence.end());
5        return st.size()==26;
6    }
7};