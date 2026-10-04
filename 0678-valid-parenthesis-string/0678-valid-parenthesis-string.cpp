class Solution {
public:
    bool checkValidString(string s) {
        stack<int>openindx;
        stack<int>starindx;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(') openindx.push(i);
            else if(s[i]=='*') starindx.push(i);
            else{
                if(!openindx.empty())    //valid ( exist
                {
                    openindx.pop();
                }
                else if(!starindx.empty())   // take * as open bracket
                {
                    starindx.pop();
                }
                else return false;
            }
        }
        if(openindx.empty() && starindx.empty()) return true;
        //to check if valid * exist for (
        while(!openindx.empty() && !starindx.empty()){
            if(starindx.top()<openindx.top()) return false; // * comes before (
            openindx.pop();
            starindx.pop();
        }
    return openindx.empty();
    }
};