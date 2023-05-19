class Solution {
public:
    int hIndex(vector<int> &citations) {
        int answer = 0;
        int n = citations.size();

        sort(citations.begin(), citations.end(), greater());
        for (int i = 0; i < n; i++) {
            if (citations[i] > i) {
                answer++;
            } else {
                break;
            }
        }
        
        return answer;
    }
};