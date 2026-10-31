class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int mxlength=0;
        int lp=0,rp=0;
        unordered_map<char,int>mp;
        for( rp=0;rp<s.length();rp++){
            if(mp.count(s[rp]) && mp[s[rp]]>=lp){
                lp=mp[s[rp]]+1;
            }
            mxlength=max(mxlength,rp-lp+1);
            mp[s[rp]]=rp;
        }
        return mxlength;
    }
};