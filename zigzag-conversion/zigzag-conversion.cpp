class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.size();
        string answer = "";
        if (numRows == 1) {
            return s;
        }

        int cycle = (numRows - 1) * 2;
        for (int i = 0; i < numRows; i++) {
            for (int j = 0;; j++) {
                if (j * cycle + i >= n) {
                    break;
                }
                answer.push_back(s[j * cycle + i]);

			    if (i == 0 || i == numRows - 1) {
                    continue;
                }
                if ((j + 1) * cycle - i >= n) {
                    break;
                }
                answer.push_back(s[(j + 1) * cycle - i]);
            }
        }
        return answer;
    }
};