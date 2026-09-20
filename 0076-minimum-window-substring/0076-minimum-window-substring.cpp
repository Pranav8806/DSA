class Solution {
public:
    string minWindow(string s, string t) {
        int mnlen=INT_MAX;
        int stindx=0;
        int lp=0,rp=0;
        int cnt=0;
        unordered_map<char,int>mp;
        for(auto ch:t){
            mp[ch]++;
        }
        while(rp<s.length() && lp<s.length()){
            if(mp[s[rp]]>0){
                cnt+=1;
            }
            mp[s[rp]]--;
            while(cnt==t.length()){
                if(rp-lp+1<mnlen){
                    mnlen=rp-lp+1;
                    stindx=lp;
                }
                if(mp[s[lp]]>=0) cnt--;
                mp[s[lp]]++;
                lp++;
            }
            rp++;
        }
    if(mnlen==INT_MAX) return "";
    return s.substr(stindx,mnlen);
    }
};