1class Solution {
2public:
3    bool detectCapitalUse(string word) {
4        int upper=0;
5        for(char c : word){
6            if(isupper(c))
7                upper++;
8        }
9        if(upper==word.size()) return true;
10        if(upper==0) return true;
11        if(upper==1 && isupper(word[0])) return true;
12
13    return false;
14    }
15};