class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans=0;
        int mx=*max_element(nums.begin(),nums.end());
        for(auto it:nums){
            ans+=mx-it;
        }
        return ans;
    }
};