class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int mxlen=0;
        int lp=0,rp=0;
        unordered_map<int,int>mp;
        while(rp<nums.size()){
            mp[nums[rp]]++;
            while(mp[nums[rp]]>k){
                mp[nums[lp]]--;
                if(nums[lp]==0) mp.erase(nums[lp]);
                lp++;
            }
            mxlen=max(mxlen,rp-lp+1);
            rp++;
        }
    return mxlen;
    }
};