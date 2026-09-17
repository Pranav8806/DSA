class Solution {
public:
    int helper(vector<int>& nums, int k){
        int cnt=0;
        int lp=0,rp=0;
        unordered_map<int,int>mp;
        while(rp<nums.size()){
            mp[nums[rp]]++;
            while(mp.size()>k){
                mp[nums[lp]]--;
                if(mp[nums[lp]]==0){
                    mp.erase(nums[lp]);
                }
                lp++;
            }
            cnt+=rp-lp+1;
            rp++;
        }
    return cnt;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return helper(nums,k)-helper(nums,k-1);
    }
};