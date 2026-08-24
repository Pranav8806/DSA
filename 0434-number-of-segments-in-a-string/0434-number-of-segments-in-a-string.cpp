class Solution {
public:
    int count(string s,int i){
        if(i==s.length()){
            return 0;
        }
        if(s[i]!=' ' && ( i==0 || s[i-1]==' ')){
            return 1+count(s,i+1);
        }
        return count(s,i+1);
    }
    int countSegments(string s) {
        if(s=="") return 0;
        return count(s,0);
    }
};