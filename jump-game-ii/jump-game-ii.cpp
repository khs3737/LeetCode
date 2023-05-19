class Solution {
public:
    int jump(vector<int> &nums) {
        int n = nums.size();
        vector<int> jump_count(n);
        for (int i = 0; i < n; i++) {
            jump_count[i] = 1000000;
        }
        jump_count[0] = 0;

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j <= min(i + nums[i], n - 1); j++) {
                jump_count[j] = min(jump_count[j], jump_count[i] + 1);
            }
        }
        return jump_count[n - 1];
    }
};