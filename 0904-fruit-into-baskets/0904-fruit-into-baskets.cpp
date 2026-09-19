class Solution {
public:
    int totalFruit(vector<int>& s) {
        int mxlength=0;
        int lp=0,rp=0;
        unordered_map<int,int>mp;
        while(rp<s.size()){
            mp[s[rp]]++;
            while(mp.size()>2){
                mp[s[lp]]--;
                if(mp[s[lp]]==0){
                    mp.erase(s[lp]);
                }
                lp++;
            }
            mxlength=max(mxlength,rp-lp+1);
            rp++;
        }
        return mxlength;
    }
};