class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit =0, m=prices[0];
        for(int i=1;i<prices.size();i++){
            int temp= prices[i]-m;
            profit = max(temp, profit);
            m=min(m, prices[i]);
        }
        return profit;
    }
};