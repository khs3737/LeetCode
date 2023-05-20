class Solution {
public:
    int candy(vector<int> &ratings) {
        int n = ratings.size();
        vector<int> v1(n);
        vector<int> v2(n);
        v1[0] = 1;
        for (int i = 1; i < n; i++) {
            if (ratings[i - 1] < ratings[i]) {
                v1[i] = v1[i - 1] + 1;
            } else {
                v1[i] = 1;
            }
        }

        v2[n - 1] = 1;
        for (int i = n - 2; i >= 0; i--) {
            if (ratings[i] > ratings[i + 1]) {
                v2[i] = v2[i + 1] + 1;
            } else {
                v2[i] = 1;
            }
        }

        int answer = 0;
        for (int i = 0; i < n; i++) {
            answer += max(v1[i], v2[i]);
        }
        return answer;
    }
};