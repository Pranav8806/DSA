class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int mx=INT_MIN;
        if(nums.size()==1) return 0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            mx=max(mx,nums[i]-nums[i-1]);
        }
        return mx;
    }
};