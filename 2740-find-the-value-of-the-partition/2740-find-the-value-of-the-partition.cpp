class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        int mn=INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            mn=min(mn,nums[i]-nums[i-1]);
        }
    return mn;
    }
};