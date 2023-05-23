class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        int n = str.size();
        int l = 0, r = 0;
        int m = 0;
        set<int> s;
        while (r < n) {
            if (s.find(str[r]) != s.end()) {
                while (1) {
                    s.erase(str[l]);
                    if (str[l] == str[r]) {
                        l++;
                        break;
                    }
                    l++;
                }
            } else {
                s.insert(str[r]);
                r++;
                m = max(m, (int)s.size());
            }
        }
        return m;
    }
};