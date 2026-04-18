class Solution {
    public:
        int mirrorDistance(int n) {
            int orignalval=n;
            int rem,rev=0;
            if(rev>INT_MAX/10 || rev<INT_MIN/10) return 0;
            while(n!=0){
                rem=n%10;
                rev=rev*10+rem;
                n=n/10;
            }
        return abs(orignalval-rev);
            
        }
    };