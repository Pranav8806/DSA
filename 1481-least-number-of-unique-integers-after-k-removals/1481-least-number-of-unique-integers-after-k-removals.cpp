class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        for(auto it:arr){
            mp[it]++;
        }
        vector<pair<int, int>> v(mp.begin(), mp.end());
        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            return a.second < b.second;
        });
        for(auto it:v){
            while(it.second>0 && k>0){
                it.second--;
                k--;
            }
            if(it.second==0){
                mp.erase(it.first);
            }
        }
        return mp.size();
    }
};