class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string answer = "";
        string temp = "";
        vector<string> words;

        for (int i = 0; i <= n; i++) {
            if (i != n && s[i] != ' ') {
                temp.push_back(s[i]);
            } else if (temp.size() > 0) {
                words.push_back(temp);
                temp = "";
            }
        }
        for (int i = words.size() - 1; i >= 0; i--) {
            answer.append(words[i]);
            if (i != 0) {
                answer.push_back(' ');
            }
        }

        return answer;
    }
};