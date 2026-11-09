class Solution {
public:
    int maxEqualAdjacentPairs(vector<int>& nums) {
        map<pair<int,int>,int>mp;
        int cnt=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]) cnt++;
            else{
                int a=min(nums[i-1],nums[i]);
                int b=max(nums[i-1],nums[i]);
                mp[{a,b}]++;
            }
        }
        int mx=0;
        for(auto it:mp){
            mx=max(mx,it.second);
        }
    return cnt+mx;
    }
};