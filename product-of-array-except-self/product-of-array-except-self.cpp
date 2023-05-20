class Solution {
public:
    vector<int> productExceptSelf(vector<int> &nums) {
        int n = nums.size();
        vector<int> answer(n);

        int x = 1;
        answer[0] = 1;
        for (int i = 1; i < n; i++) {
            x *= nums[i - 1];
            answer[i] = x;
        }

        x = 1;
        for (int i = n - 2; i >= 0; i--) {
            x *= nums[i + 1];
            answer[i] *= x;
        }

        return answer;
    }
};