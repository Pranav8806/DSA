class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int n=groupSizes.size();
        vector<vector<int>> ans;
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<n;i++){
            int size=groupSizes[i];
            mp[groupSizes[i]].push_back(i);
            if(mp[groupSizes[i]].size()==size)
            {
                ans.push_back(mp[groupSizes[i]]);
                mp[groupSizes[i]].clear();
            }
        }
    return ans;
    }
};