class Solution {
public:
    int minInsertions(string s) {
        stack<char>st;
        int count=0;      //for counting requirement of open bracket
        int n=s.length();
        for (int i=0;i<n;i++){
            if(s[i]=='('){
                st.push(s[i]);
            }
            else{
                if(i+1<=n-1 && s[i+1]==')'){
                    i++;
                    if(st.empty()){
                        count++;
                    }
                    else{
                        st.pop();
                    }
                }
                else{        //only one )
                    if(st.empty()){
                        count+=2;
                    }
                    else{
                        st.pop();
                        count++;
                    }
                }
            }
        }
    return st.size()*2+count;
    }
};