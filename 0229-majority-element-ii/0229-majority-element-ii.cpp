class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums;
        vector<int>ans;
        unordered_map<int,int>mp;
        for(auto it :nums){
            mp[it]++;
        }
        for(auto it :mp){
            if(it.second>floor(n/3))
            ans.push_back(it.first);
        }
        return ans;
    }
};