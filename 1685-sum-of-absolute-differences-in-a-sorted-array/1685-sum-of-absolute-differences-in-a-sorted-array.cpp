class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size();
        vector<int>pref(n,-1);
        vector<int>suff(n,-1);
        vector<int>ans(n,0);
        pref[0]=0;
        suff[n-1]=0;
        for(int i=1;i<n;i++){
            pref[i]=pref[i-1]+nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            suff[i]=nums[i+1]+suff[i+1];
        }
        for(int i=0;i<n;i++){
            int lsum=abs(pref[i]-i*nums[i]);
            int rsum=abs(suff[i]-(n-i-1)*nums[i]);
            ans[i]=lsum+rsum;
        }
        return ans;
    }
};