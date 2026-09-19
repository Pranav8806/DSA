class Solution {
public:
    int longestSubstring(string s, int k) {
        int mxlength=0;
        for(int i=0;i<s.length();i++){
            unordered_map<char,int>mp;
            for(int j=i;j<s.length();j++){
                mp[s[j]]++;
                bool valid = true;

                for (auto it : mp) {
                    if (it.second < k) {
                        valid = false;
                        break;
                    }
                }

                if (valid) {
                    mxlength = max(mxlength, j - i + 1);
                }
            }
        }
    return mxlength;
    }
};