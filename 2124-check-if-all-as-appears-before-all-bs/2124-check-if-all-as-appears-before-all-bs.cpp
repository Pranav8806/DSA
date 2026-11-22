class Solution {
public:
    bool checkString(string s) {
        if(s.length()<=1) return true;
        if(s[0]=='b'){
            for(int i=1;i<s.length();i++){
                if(s[i]=='a') return false;
            }
        }
        else {
            bool isb=false;
            for(int i=1;i<s.length();i++){
                if(isb && s[i]=='a') return false;
                else if(s[i]=='b'){
                    isb=true;
                }
            }
        }
    return true;
    }
};