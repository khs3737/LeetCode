class Solution {
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
        int n = gas.size();
        int total = 0;
        for (int i = 0; i < n; i++) {
            gas[i] -= cost[i];
            total += gas[i];
        }
        if (total < 0) {
            return -1;
        }
        int start_position = 0;
        int cur = 0;
        for (int i = 0; i < n; i++) {
            cur += gas[i];
            if (cur < 0) {
                start_position = i + 1;
                cur = 0;
            }
        }
        return start_position;
    }
};