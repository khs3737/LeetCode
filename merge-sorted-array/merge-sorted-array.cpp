class Solution {
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
        vector<int> answer;
        int cur1 = 0, cur2 = 0;
        for (int i = 0; i < m + n; i++) {
            if (cur1 == m || (cur2 != n && nums1[cur1] > nums2[cur2])) {
                answer.push_back(nums2[cur2]);
                cur2++;
            } else {
                answer.push_back(nums1[cur1]);
                cur1++;
            }
        }
        nums1 = answer;
    }
};