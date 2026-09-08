class Solution {
public:
    int numOfSubarrays(vector<int>& nums) {
        int n=nums.size();
        vector<int>PrefixSum(n);
        PrefixSum[0]=nums[0];
        for(int i=1;i<n;i++){
            PrefixSum[i]=PrefixSum[i-1]+nums[i];
        }
        long long cnt=0;
        long long even=0;
        long long odd=0;
        long long mod=1000000007;
        for(int j=0;j<n;j++){
            if(PrefixSum[j]%2 !=0) odd++;
            else even++;   
        }
        cnt+=odd;
        //difference of one odd and one even subarray;
        cnt+=(odd*even);
    return cnt%mod;
    }
};