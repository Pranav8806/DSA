class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0,rsum=0,mxsum;
        for(int i=0;i<k;i++){
            lsum+=cardPoints[i];
        }
        mxsum=lsum;
        int rp=cardPoints.size()-1;
        for(int i=k-1;i>=0;i--){
            if(rp<0) break;
            lsum-=cardPoints[i];
            rsum+=cardPoints[rp];
            rp--;
            mxsum=max(mxsum,lsum+rsum);
        }
        return mxsum;
    }
};