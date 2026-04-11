class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int i,bestbuy =prices[0],mxpft=0;
            for (i=0;i<prices.size();i++){
                if(prices[i]>bestbuy){
                    mxpft=max(mxpft,prices[i]-bestbuy);
                }
                bestbuy=min(bestbuy,prices[i]);
            }
            if (mxpft<0) return 0;
            else return mxpft;  
        }
    };