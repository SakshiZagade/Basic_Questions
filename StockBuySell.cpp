class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        if (prices.empty()) return 0;

        int minPrice = prices[0];  // Track the minimum price so far
        int maxProfit = 0;         // Track the maximum profit possible

        for (int i = 1; i < prices.size(); i++) {
            maxProfit = max(maxProfit, prices[i] - minPrice); // Update max profit
            minPrice = min(minPrice, prices[i]);  // Update min price
        }
        
        return maxProfit;
    }
};
