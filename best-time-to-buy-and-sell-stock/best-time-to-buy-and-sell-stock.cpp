class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int n = prices.size();
        int minPrice = prices[0];
        int answer = 0;
        for (int i = 0; i < n; i++) {
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            } else {
                answer = max(answer, prices[i] - minPrice);
            }
        }
        return answer;
    }
};