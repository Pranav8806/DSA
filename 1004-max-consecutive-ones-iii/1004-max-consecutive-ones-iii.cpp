class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int mxlen=0;
        int zero=0;
        int lp=0,rp=0;
        while(lp<nums.size() && rp<nums.size()){
            if(nums[rp]==0) zero++;
            if(zero>k){
                if(nums[lp]==0) zero--;
                lp++;
            }
            if(zero<=k) mxlen=max(mxlen,rp-lp+1);
            rp++;
        }
    return mxlen;
    }
};