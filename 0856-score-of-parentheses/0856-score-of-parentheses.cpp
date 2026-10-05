class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st;
        int score=0;
        for(int i=0 ;i<s.length();i++ ){
            if(s[i]=='('){
                st.push(score);   //previous score
                score=0;
            }
            else{
                if(s[i-1]=='('){
                    score=st.top()+1;   //previous+1
                }
                else{
                    score=2*score+st.top();   //nested+prev
                }
                st.pop();
            }
        }   
    return score; 
    }
};