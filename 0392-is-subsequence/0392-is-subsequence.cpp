class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.length()>t.length()) return false;
        int eqcount=0;
        int i=0,j=0;
        while(i<s.length() && j<t.length()){
            if(s[i]==t[j]){
                eqcount++;
                i++;
                j++;
            }
            else j++;
        }
    return eqcount==s.length();
    }
};