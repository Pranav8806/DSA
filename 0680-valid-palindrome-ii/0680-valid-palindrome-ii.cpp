class Solution {
public:
    bool is_pallindrome(int st,int ed,string s){
        while(st<=ed){
            if(s[st]!=s[ed]) return false;
            st++;
            ed--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int st=0;
        int ed=s.length()-1;
        while(st<=ed){
            if(s[st]!=s[ed]){
                //deleting one starting || deleting one ending character
                return is_pallindrome(st+1,ed,s) ||is_pallindrome(st,ed-1,s);
            }
            st++;
            ed--;
        }
        return true;
    }
};