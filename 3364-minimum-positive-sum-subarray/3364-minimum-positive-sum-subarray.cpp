class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int lp=0,rp=0;
        int ans=INT_MAX;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                if(j-i+1>r) break;
                sum+=nums[j];
                int len=j-i+1;
                if(len>=l && sum>0){
                    ans=min(ans,sum);
                }
            }
        }
        if(ans==INT_MAX) return -1;
        return ans;
    }
};