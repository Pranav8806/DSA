class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int tsum=0;
        for(auto num : nums){
            tsum+=num;
        }
        int cnt=0;
        int lsum=0;
        for(int i=0;i<nums.size()-1;i++){
            lsum+=nums[i];
            int rsum=tsum-lsum;
            if((lsum-rsum)%2==0) cnt++;
        }
        return cnt;
    }
};