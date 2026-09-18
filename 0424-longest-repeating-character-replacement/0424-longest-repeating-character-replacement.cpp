class Solution {
public:
    int characterReplacement(string s, int k) {
        int mxlength=0;
        int lp=0,rp=0;
        unordered_map<int,int>mp;
        int  mxfreq=0;
        while(rp<s.length()){
            mp[s[rp]]++;
            mxfreq=max(mxfreq,mp[s[rp]]);
            while(rp-lp+1-mxfreq>k)
            {
                mp[s[lp]]--;
                mxfreq=0;
                for(auto it:mp){
                    mxfreq=max(mxfreq,it.second);
                }
                lp++;
            }
            int length=rp-lp+1;
            mxlength=max(mxlength,length);
            rp++;
        }
    return mxlength;
    }
};