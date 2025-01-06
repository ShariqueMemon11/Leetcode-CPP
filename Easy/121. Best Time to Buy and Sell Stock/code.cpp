class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        for(int i = 0 ; i < size(prices) ; i++){
            for(int j = i+1 ; j < size(prices); j++){
                if( prices[i] >= prices[j] ){
                    break;
                    }
                else if(profit<prices[j]-prices[i]){
                    profit=prices[j]-prices[i];
                }
            }
        }
        return profit;
    }
};
