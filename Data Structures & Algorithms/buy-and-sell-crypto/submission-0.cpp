class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int leftmin = prices[0];
        int result = 0;
        for(int i = 0;i<prices.size();i++){
            if(prices[i] < leftmin){
                leftmin = prices[i];
            }
            result = max(result,prices[i]-leftmin);
            
        }
        return result;
    }
};
