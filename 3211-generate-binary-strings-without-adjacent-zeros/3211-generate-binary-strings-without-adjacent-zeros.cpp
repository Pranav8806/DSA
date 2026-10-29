class Solution {
public:
    vector<string>ans;
    void helper(int n,string &s,char lastchar){
        if(s.length()==n){
            ans.push_back(s);
            return;
        }
        s.push_back('1');
        helper(n, s, '1');
        s.pop_back();
        if (lastchar != '0') {
            s.push_back('0');
            helper(n, s, '0');
            s.pop_back();
        }
    }
    vector<string> validStrings(int n) {
        string s="";
        helper(n,s,'\0');
        return ans;
    }
};