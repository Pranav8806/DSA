class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                nums[i]=0;
            }
            else {
                nums[i]=1;
            }
        }
        int count=0;
        int n=nums.size();
        int PrefixSum[n];
        PrefixSum[0]=nums[0];
        for(int i=1;i<n;i++){
            PrefixSum[i]=PrefixSum[i-1]+nums[i];
        }
        unordered_map<int,int>m;
        for(int j=0;j<n;j++){
            if(PrefixSum[j]==k) count++;
            int val=PrefixSum[j]-k;
            if(m.count(val)) count+=m[val];
            m[PrefixSum[j]]++;
        }
        return count;
    }
};