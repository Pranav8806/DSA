class Solution {
public:
    int sumofprime(int n){
        if(n<=1) return 0;
        int sum=0;
        for(int i=2;i*i<=n;i++){
            while(n%i==0){
                sum+=i;
                n=n/i;
            }
        }
        //for prime number itself
        if(n>1) sum+=n;
        return sum;
    }
    int smallestValue(int n) {
        while(true){
            int x=sumofprime(n);
            if(x==n) return x;
            n=x;
        }
    }
};