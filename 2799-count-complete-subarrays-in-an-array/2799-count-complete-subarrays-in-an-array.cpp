class Solution {
public:
    int helper(vector<int>& nums,int k){
        int lp=0,rp=0;
        int count =0;
        unordered_map<int,int>mp;
        while(rp<nums.size()){
            mp[nums[rp]]++;
            while(mp.size()>k){
                mp[nums[lp]]--;
                if(mp[nums[lp]]==0)
                {
                    mp.erase(nums[lp]);
                }
                lp++;
            }
            count+=rp-lp+1;
            rp++;
        }
        return count;
    }
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto num:nums){
            mp[num]++;
        }
        int k=mp.size();
        return helper(nums,k)-helper(nums,k-1);
    }
};