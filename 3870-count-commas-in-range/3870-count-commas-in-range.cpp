class Solution {
public:
    int countCommas(int n) {
        string s=to_string(n);
        if(s.length()<4) return 0;
        int cnt=0;
        int st=1000;
        while(st<=n){
            cnt+=(n-st+1);
            st=st*1000;
        }
    return cnt;
    }
};