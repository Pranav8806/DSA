class Solution {
public:
    bool isVowel(char ch){
        if(ch=='a' || ch=='e' || ch=='i' ||ch=='o' ||ch=='u') return true;
        return false;
    }
    int maxVowels(string s, int k) {
        int lp=0;
        int mxvowel=0;
        int cnt=0;
        for(int rp=0;rp<s.length();rp++){
            if(isVowel(s[rp])) cnt++;
            if(rp-lp+1>k) {
                if(isVowel(s[lp])){
                    cnt--;
                }
                lp++;
            }
            if(rp-lp+1==k){
                mxvowel=max(mxvowel,cnt);
            }
        }
        return mxvowel;
    }
};