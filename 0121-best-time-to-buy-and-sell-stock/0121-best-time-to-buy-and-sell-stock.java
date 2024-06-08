public class Solution {
    public int maxProfit(int[] prices) {
        // Initialize variables to track the minimum price and the maximum profit
        int minPrice = Integer.MAX_VALUE;
        int maxProfit = 0;
        
        // Iterate through the prices array
        for (int price : prices) {
            // Update the minimum price encountered so far
            if (price < minPrice) {
                minPrice = price;
            }
            // Calculate the profit if the stock is sold today
            else {
                int profit = price - minPrice;
                // Update the maximum profit
                if (profit > maxProfit) {
                    maxProfit = profit;
                }
            }
        }
        
        // Return the maximum profit
        return maxProfit;
    }
}
