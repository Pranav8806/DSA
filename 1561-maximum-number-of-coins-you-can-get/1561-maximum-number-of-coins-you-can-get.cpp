class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        if(piles.size()<3 || piles.size()%3!=0) return 0;
        int mxcoin=0;
        int n=piles.size()/3;
        int i=1,j=piles.size()-2;
        while(i<=n && j>=0){
            mxcoin+=piles[j];
            i++;
            j-=2;
        }
    return mxcoin;
    }
};