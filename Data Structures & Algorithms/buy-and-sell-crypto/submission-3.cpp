class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int i = 0;
        int k = 1;
        int currBest = 0;
        int profit = 0;
        while (k < n) {
            if (prices[k] < prices[i]){
                i = k;
            }
            profit = prices[k] - prices[i];
            if (profit > currBest) currBest = profit;
            ++k;
        }
        return currBest;
    }
};
