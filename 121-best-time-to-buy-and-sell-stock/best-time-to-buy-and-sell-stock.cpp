class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int Profit;
        int maxProfit=0;
        int minPrice=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]<minPrice){
                minPrice=prices[i];
            }
            Profit=prices[i]-minPrice;
            maxProfit=max(maxProfit,Profit);
        }
        return maxProfit;
    }
};