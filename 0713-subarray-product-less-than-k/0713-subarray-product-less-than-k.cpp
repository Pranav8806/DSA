class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int cnt=0;
        int lp=0;
        int rp=0;
        long long prod=1;
        while(rp<nums.size()){
            prod*=nums[rp];
            while(prod>=k && lp<=rp){
                prod=prod/nums[lp];
                lp++;
            }
            cnt+=rp-lp+1;
            rp++;
        }
    return cnt;
    }
};