class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(i+k<nums.size() && nums[i]<=nums[i+k]) continue;
            if(i-k<nums.size() && nums[i]<=nums[i-k]) continue;
            else sum+=nums[i];
        }
    return sum;
    }
};