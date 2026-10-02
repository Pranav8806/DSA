class Solution {
public:
    vector<string>ans;
    void helper(string &s,int openp,int closep,int n){
        if(openp == n && closep == n){
            ans.push_back(s);
            return;
        }
        if(openp<n){
            s+="(";
            helper(s,openp+1,closep,n);
            s.pop_back();                        //backtrack
        }
        if(closep<openp){
            s+=")";
            helper(s,openp,closep+1,n);
            s.pop_back();                        //backtrack
        }
    }
    vector<string> generateParenthesis(int n) {
        string s="";
        helper(s,0,0,n);
        return ans;
    }
};