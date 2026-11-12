class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>prefsum(n);
        prefsum[0]=nums[0];
        for(int i=1;i<n;i++){
            prefsum[i]=nums[i]+prefsum[i-1];
        }
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            int rem=prefsum[i]%k;
            if(rem==0 && i>0) return true;
            if(mp.count(rem)){
                if((i-mp[rem])>=2) return true;
            }
           else mp[rem]=i;
        }
        return false;
    }
};