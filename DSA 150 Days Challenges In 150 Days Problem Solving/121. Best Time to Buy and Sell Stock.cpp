class Solution {
public:
    int maxProfit(vector<int>& prices) {

         if(prices.empty()) return 0;   // Yadi koi Price nahi ho to 0 Profit return kre 
        int buy = prices[0], profit = 0;   //yaha pe  aap initialize the buying price to the frist price in the list  and // Initialize the maximum profit to 0.
        for(int i = 1; i < prices.size(); i++)
        {

        buy = min(buy, prices[i]);  // Update the buying price to the minimum price seen so far.
        profit = max(profit, prices[i] - buy); // then yaha pe update kre max price in this list

        }
        return profit;  // Return the maximum profit calculated.
        
    }
};