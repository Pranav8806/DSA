class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        for(auto ch : s){
            if(ch=='('){
                st.push(ch);
            }
            else{
                if(!st.empty() && st.top()=='(' && ch==')'){
                    st.pop();
                }
                else st.push(')');
            }        
        }
        return st.size();
    }
};