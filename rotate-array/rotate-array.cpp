class Solution {
public:
    void rotate(vector<int> &nums, int k) {
        int n = nums.size();
        k = k % n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            v[i] = nums[(n + i - k) % n];
        }
        nums = v;
    }
};