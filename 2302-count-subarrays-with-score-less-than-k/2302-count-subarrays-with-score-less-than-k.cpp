class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long count=0;
        int lp=0,rp=0;
        long long sum=0;
        while(rp<nums.size()){
            sum+=nums[rp];
            while(sum*(rp-lp+1)>=k){
                sum-=nums[lp];
                lp++;
            }
            count+=rp-lp+1;
            rp++;
        }
        return count;
    }
};