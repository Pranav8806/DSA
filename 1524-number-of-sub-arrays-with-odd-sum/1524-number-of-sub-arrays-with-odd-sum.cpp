class Solution {
public:
    int numOfSubarrays(vector<int>& nums) {
        int n=nums.size();
        long long prefsum=0;
        long long cnt=0;
        long long even=0;
        long long odd=0;
        long long mod=1000000007;
        for(int i=0;i<n;i++){
            prefsum+=nums[i];
            if(prefsum%2 !=0) odd++;
            else even++; 
        }
        cnt+=odd;
        //difference of one odd and one even subarray;
        cnt+=(odd*even);
    return cnt%mod;
    }
};