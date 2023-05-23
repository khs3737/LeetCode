class Solution {
public:
    int removeElement(vector<int> &nums, int val) {
        int n = nums.size();
        int answer = n;
        vector<int> v;
        for (int i = 0; i < n; i++) {
            if (nums[i] == val) {
                answer--;
            } else {
                v.push_back(nums[i]);
            }
        }
        nums = v;
        return answer;
    }
};