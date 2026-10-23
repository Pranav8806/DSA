class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int len=1;
        if(nums.size()<=1) return nums.size();
        int mxlen=INT_MIN;
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]==1) {
                len++;
                mxlen=max(mxlen,len);
            }
            else if(nums[i]-nums[i-1]==0) continue;
            else len=1;
        }
        if(mxlen==INT_MIN) return 1;
    return mxlen;
    }
};