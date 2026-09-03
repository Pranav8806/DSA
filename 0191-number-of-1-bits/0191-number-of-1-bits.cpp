class Solution {
public:
    int hammingWeight(int n) {
        int one=0;
        while(n!=0){
            if(n%2==1) one++;
            n=n/2;
        }
        return one;
    }
};