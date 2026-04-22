class Solution {
    public:
        int myAtoi(string s) {
            long long num=0;
            int sign=1;
            int i=0;
            if (!s.empty() && isalpha(s[0])) return 0;
            while(i<s.length() && s[i]==' ') i++;
            if(s[i]=='-') {
                sign=-1;                     // check the starting of string even if space exist;
                i++;
            }
            else if(s[i]=='+'){              // check the starting of string even if space exist; 
                i++;
            }
            while(i<s.length() && int(s[i]) >= 48 && int (s[i])<=57 ){
                num=num*10+(s[i]-'0');
                if(sign*num>INT_MAX) return INT_MAX;
                if(sign*num<INT_MIN) return INT_MIN;
                i++;
            }
        return sign*num;    
        }
    };