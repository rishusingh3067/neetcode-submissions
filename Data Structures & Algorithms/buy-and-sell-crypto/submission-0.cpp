class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low = prices[0];
        int res = 0;

        for(int i = 1; i < prices.size(); i++) {
            low = min(low, prices[i]);              // buy at lowest price
            res = max(res, prices[i] - low);       // sell today
        }

        return res;
    }
};