
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int purchase = prices[0];
        int netpro=0;
        for(int i=0;i<prices.size();i++){
            purchase=min(purchase,prices[i]);
            netpro=max(netpro,prices[i]-purchase);
        }
        return netpro;
    }
};
