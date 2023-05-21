class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        string str = "";
        for (int i = 0; i < n; i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] += -'A' + 'a';
            }
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) {
                str.push_back(s[i]);
            }
        }

        int m = str.size();
        for (int i = 0; i < m / 2; i++) {
            if (str[i] != str[m - 1 - i]) {
                return false;
            }
        }

        return true;
    }
};