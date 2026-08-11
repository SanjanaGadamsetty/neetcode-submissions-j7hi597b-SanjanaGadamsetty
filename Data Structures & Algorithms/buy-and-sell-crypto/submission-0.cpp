class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_val = prices[0];
        int max_profit = 0;

        for (int n : prices){
            min_val = min(min_val, n);
            max_profit = max(max_profit, n - min_val);
        }

        return max_profit;
    }
};
