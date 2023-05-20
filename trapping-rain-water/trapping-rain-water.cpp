class Solution {
public:
    int trap(vector<int> &height) {
        int n = height.size();
        int answer = 0, max_height = 0, max_position = 0, temp = 0;

        for (int i = 0; i < n; i++) {
            if (height[i] < max_height) {
                temp += max_height - height[i];
            } else {
                answer += temp;
                temp = 0;
                max_height = height[i];
                max_position = i;
            }
        }

        max_height = 0;
        max_position = n - 1;
        temp = 0;

        for (int i = n - 1; i >= 0; i--) {
            if (height[i] <= max_height) {
                temp += max_height - height[i];
            } else {
                answer += temp;
                temp = 0;
                max_height = height[i];
                max_position = i;
            }
        }
        return answer;
    }
};