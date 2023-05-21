class Solution {
public:
    bool isSubsequence(string s, string t) {
        int cur = 0;
        for (int i = 0; i < t.size(); i++) {
            if (s[cur] == t[i]) {
                cur++;
                if (cur == s.size()) {
                    break;
                }
            }
        }
        return cur == s.size();
    }
};