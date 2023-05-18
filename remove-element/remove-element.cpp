class Solution {
public:
    int removeElement(vector<int> &nums, int val) {
        queue<int> q;
        int answer = nums.size();
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == val) {
                answer--;
                q.push(i);
            } else if (!q.empty()) {
                q.push(i);
                nums[q.front()] = nums[i];
                q.pop();
            }
        }
        return answer;
    }
};