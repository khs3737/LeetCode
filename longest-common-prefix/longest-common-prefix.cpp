class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        int n = strs.size();
        string answer = strs[0];
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < answer.size(); j++) {
                if (j >= strs[i].size() || answer[j] != strs[i][j]) {
                    answer = answer.substr(0, j);
                    break;
                }
            }
            if (answer == "") {
                break;
            }
        }
        return answer;
    }
};