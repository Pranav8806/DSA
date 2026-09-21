class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int onecount=0,zerocount=0;
        for(auto num:nums){
            if(num==1) onecount++;
            else zerocount++;
        }
        if(zerocount==nums.size()) return 0;
        if(onecount==nums.size()) return nums.size()-1;
        int mxlen=0;
        int lp=0,rp=0;
        zerocount=0;
        while(rp<nums.size()){
            if(nums[rp]==0) zerocount++;
            while(zerocount>1){
                if(nums[lp]==0) zerocount--;
                lp++;
            }
            mxlen=max(mxlen,rp-lp);
            rp++;
        }
    return mxlen;
    }
};