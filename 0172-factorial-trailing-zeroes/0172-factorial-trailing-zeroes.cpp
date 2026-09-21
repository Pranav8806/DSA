class Solution {
public:
    int trailingZeroes(int n) {
        int cnt=0;
        for(int i=5;i<=n;i=i*5){
            cnt+=int(n)/i;
        }
        
        return cnt;
    }

};