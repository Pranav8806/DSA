class Solution {
public:
    int countPrimes(int n) {
        vector<bool>isPrime(n,true);
        if(n <= 2) return 0;
        for(int i=3;i*i<n;i+=2){
            if(isPrime[i]){
                //mark all multiples of i false;
                for(int j=i*i;j<n;j+=2*i){
                    isPrime[j]=false;
                }
            }
        }
        int count=1;
        for(int i=3;i<n;i+=2){
            if(isPrime[i]) count++;
        }
        return count;
    }
};