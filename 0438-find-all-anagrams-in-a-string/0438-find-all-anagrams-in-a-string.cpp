class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        if(s.length()<p.length()) return ans;
        int winlength=p.length();
        vector<int>freq1(26,0);
        vector<int>freq2(26,0);
        for(auto ch :p){
            freq1[ch-'a']++;
        }
        int lp=0;
        int rp=0;
        while(rp<s.length()){
            freq2[s[rp]-'a']++;
            if(rp-lp+1==winlength){
                if(freq1==freq2){
                    ans.push_back(lp);
                }
                freq2[s[lp]-'a']--;
                lp++;
            }
            rp++;
        }
    return ans;
    }
};