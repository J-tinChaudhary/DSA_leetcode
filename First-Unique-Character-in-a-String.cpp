1class Solution {
2public:
3    int firstUniqChar(string s) {
4        unordered_map<char, int> freq;
5
6    for (char c : s) {
7        freq[c]++;
8    }
9    for(int i=0;i<s.size();i++){
10        if(freq[s[i]]==1)
11        return i;
12    }
13    return -1;
14    }
15};