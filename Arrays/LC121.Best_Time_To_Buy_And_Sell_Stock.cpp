//you cannot just find minimum as left ptr and try to find max value in right of it
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;
        int right = 0;
        int profit = 0;

        while(right < prices.size()){

            if(prices[right] < prices[left])
            left = right;

            profit = max(profit , prices[right] - prices[left]);

            right++;
        }
        return profit;
    }
};