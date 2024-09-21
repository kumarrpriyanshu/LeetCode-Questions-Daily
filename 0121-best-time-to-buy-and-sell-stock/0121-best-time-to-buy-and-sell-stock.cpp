class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
       int buy=prices[0];
       int index=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>buy){
                profit=max(profit,prices[i]-buy);
            }
            buy=min(buy,prices[i]);
            
        }
        //     if(buy>prices[i]){
        //         buy=prices[i];
        //         index=i;
        //     }

        // }
        // int sell=buy;
        // for(int i=index;i<prices.size();i++){
        //     if(sell<prices[i]){
        //         sell=prices[i];
                
        //     }

        // }
        // cout<<buy<< index<< sell;
        return   profit ;
    }
};