class Solution {
public:
    int removeDuplicates(vector<int> &nums) {
        vector<int> v;
        v.push_back(nums[0]);
        int answer = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i - 1] != nums[i]) {
                v.push_back(nums[i]);
                answer++;
            }
        }
        nums = v;
        return answer;
    }
};