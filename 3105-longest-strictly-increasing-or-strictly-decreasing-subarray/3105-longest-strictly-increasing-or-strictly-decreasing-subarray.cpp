class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int rp=1;
        int lp=0;
        int n=nums.size();
        int mxlen = 1;
        //increaseing;
        while(rp<n){
            if(nums[rp]>nums[rp-1]){
                mxlen = max(mxlen, rp-lp+1);
                rp++;
            }
            else{
                mxlen = max(mxlen, rp-lp);
                rp++;
                lp=rp-1;
            }
        }
        lp=0;
        rp=1;
        //decreasing
        while(rp<n){
            if(nums[rp]<nums[rp-1]){
                mxlen = max(mxlen, rp-lp+1);
                rp++;
            }
            else{
                mxlen = max(mxlen, rp-lp);
                rp++;
                lp=rp-1;
            }
        }
    return mxlen;
    }
};