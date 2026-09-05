class Solution {
public:
    int minSubArrayLen(int tar, vector<int>& nums) {
        int mnlen=INT_MAX;
        int left=0;
        int right=0;
        int sum=0;
        for(int right=0;right<nums.size();right++){
            sum+=nums[right];
            while(sum>=tar){
                mnlen=min(mnlen,right-left+1);
                sum-=nums[left];
                left++;
            }
        }
        if(mnlen==INT_MAX) return 0;
    return mnlen;
    }
};