class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int count=0; 
        int n=nums.size(); 
        int PrefixSum[n]; 
        PrefixSum[0]=nums[0]; 
        for(int i=1;i<n;i++){ 
            PrefixSum[i]=PrefixSum[i-1]+nums[i]; 
        } 
        unordered_map<int,int>m; 
        for(int j=0;j<n;j++){ 
            if(PrefixSum[j]==goal) count++; 
            int val=PrefixSum[j]-goal; 
            if(m.count(val)) count+=m[val]; 
            m[PrefixSum[j]]++; 
        } 
        return count;
    }
};