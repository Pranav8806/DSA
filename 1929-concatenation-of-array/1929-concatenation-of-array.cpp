class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int i,n=nums.size(),ns=2*n;
        vector<int> ans(ns);
        for(i=0;i<n;i++){
            ans[i]=nums[i];
            ans[i+n]=nums[i];
        }
        
        return ans;
    }
};