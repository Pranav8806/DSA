class Solution {
public:
    int triangularSum(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        while(nums.size()>1){
            int n=nums.size();
            for(int i=0;i<n-1;i++){
                nums[i] = (nums[i] + nums[i+1]) % 10;
            }
            nums.resize(n-1);
        }
        return nums[0];
    }
};