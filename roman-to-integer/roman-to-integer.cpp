class Solution {
public:
    int romanToInt(string s) {
        int n = s.size();
        int answer = 0;

        for (int i = 0; i < n; i++) {
            switch (s[i]) {
            case 'I':
                answer +=
                    i == n - 1 || (s[i + 1] != 'V' && s[i + 1] != 'X') ? 1 : -1;
                break;
            case 'V':
                answer += 5;
                break;

            case 'X':
                answer +=
                    i == n - 1 || (s[i + 1] != 'L' && s[i + 1] != 'C') ? 10 : -10;
                break;

            case 'L':
                answer += 50;
                break;

            case 'C':
                answer +=
                    i == n - 1 || (s[i + 1] != 'D' && s[i + 1] != 'M') ? 100 : -100;
                break;

            case 'D':
                answer += 500;
                break;

            case 'M':
                answer += 1000;
                break;
            }
        }

        return answer;
    }
};