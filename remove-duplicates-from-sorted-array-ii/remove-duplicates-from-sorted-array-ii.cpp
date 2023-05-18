class Solution {
public:
    int removeDuplicates(vector<int> &nums) {
        int min_num = -10000;
        int n = nums.size();
        int answer = n;
        int cur = min_num - 1;
        int combo = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == cur) {
                combo++;
            } else {
                for (int j = i - combo + 2; j < i; j++) {
                    nums[j] = min_num - 1;
                    answer--;
                }
                cur = nums[i];
                combo = 1;
            }
        }
        for (int i = n - combo + 2; i < n; i++) {
            nums[i] = min_num - 1;
            answer--;
        }

        int target = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] >= min_num) {
                nums[target] = nums[i];
                target++;
            }
        }

        return answer;
    }
};