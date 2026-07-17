class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0;
        int sell = 1;
        int max = 0; 
        
        for(int i = 0; i < prices.size() - 1; i++)
        {
            int net = prices[sell] - prices[buy];
            if(net < 0)
            {
                buy = sell;
            }
            else if(net > max)
            {
                max = net;
            }
            sell++;
        }
        return max;
    }
};
