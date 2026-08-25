class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,bool>mp;
        for(auto num :nums){
            mp[num]=true;
        }
        int n=k;
        while(n<101){
            if(!mp.count(n)) return n;
            n=n+k;
        }
        while(n%k!=0){
            n+=k;
        };
        return n;
    }
};