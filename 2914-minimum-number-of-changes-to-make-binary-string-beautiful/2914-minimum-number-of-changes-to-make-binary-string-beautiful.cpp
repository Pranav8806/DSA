class Solution {
public:
    int minChanges(string s) {
        int cnt=0;
        int part=1;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]!=s[i+1] && part==1) cnt++;
            part++;
            if(part==2){
                part=0;
            }
        }
        return cnt;
    }
};