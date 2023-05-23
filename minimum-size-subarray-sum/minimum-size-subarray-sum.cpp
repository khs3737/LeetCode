class Solution {
public:
    int minSubArrayLen(int target, vector<int> &nums) {
        int n = nums.size();
        int l = 0, r = 0;
        int answer = 99999999;
        int cur = 0;
        while (l < n) {
            if (r < n && cur <= target) {
                cur += nums[r];
                r++;

                if (cur >= target) {
                    answer = min(answer, r - l);
                }
            } else {
                cur -= nums[l];
                l++;

                if (cur >= target) {
                    answer = min(answer, r - l);
                }
            }
        }
        if (answer > 99999998) {
            answer = 0;
        }
        return answer;
    }
};