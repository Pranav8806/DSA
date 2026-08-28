class Solution {
public:
    bool isPrime(int n){
        if(n<2) return false;
        if(n==2) return true;
        if(n%2==0) return false;      //even nos are not prime
        //if num is not prime its one factor exist before root n
        for(int i=3 ;i*i<=n;i+=2){
            if(n%i==0) return false;
        }
    return true;
    }
    int maximumPrimeDifference(vector<int>& nums) {
        int prev=-1;
        int mx=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(isPrime(nums[i])){
                if(prev==-1){
                    mx=0;
                    prev=i;
                }
                else{
                    mx=max(mx,i-prev);
                }
            }
        }
    return mx;
    }
};