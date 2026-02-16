1class Solution {
2public:
3    string toLowerCase(string s) {
4        for(int i=0;i<s.size();i++){
5            s[i]=tolower(s[i]);
6        }
7        return s;
8    }
9};