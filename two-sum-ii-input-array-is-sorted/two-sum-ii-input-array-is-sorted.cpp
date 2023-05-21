class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        set<int> s;
        int x;
        int n = numbers.size();
        vector<int> answer(2);
        for (int i = 0; i < n; i++) {
            x = target - numbers[i];
            if (s.find(x) != s.end()) {
                answer[1] = i + 1;
                break;
            }
            s.insert(numbers[i]);
        }
        for (int i = 0; i < n; i++) {
            if (numbers[i] == x) {
                answer[0] = i + 1;
                break;
            }
        }
        return answer;
    }
};