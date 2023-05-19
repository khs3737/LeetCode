class Solution {
public:
    int jump(vector<int> &nums) {
        int n = nums.size();
        int jump_count = 0;
        int dest = 0;
        int next_dest = 0;
        for (int i = 0; i < n; i++) {
            if (i > dest) {
                jump_count++;
                dest = next_dest;
            }
            next_dest = max(next_dest, i + nums[i]);
        }
        return jump_count;
    }
};