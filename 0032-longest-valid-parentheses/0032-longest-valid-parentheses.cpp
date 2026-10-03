class Solution {
public:
    int longestValidParentheses(string s) {
        if(s.length()==0) return 0;
        stack<int>st;
        int i=0;
        st.push(-1);
        int mxlen=0;
        while(i<s.length()){
            if(s[i]=='(') {
               st.push(i);
            }
            else{
                st.pop();
                if(!st.empty()) //valid pair exist
                {
                    mxlen=max(mxlen,i-st.top());
                }
                else{
                    st.push(i);
                }
            }
            i++;
        }
        return mxlen;
    }
};