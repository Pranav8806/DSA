class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp;
        if(s.length()!=t.length()) return false;
        for(auto ch:s){
            mp[ch]++;
        }
        for(auto ch :t){
            if(mp.count(ch)){
                mp[ch]--;
            }
        }
        for(auto it:mp){
            if(it.second!=0) return false;
        }
        return true;
    }
};