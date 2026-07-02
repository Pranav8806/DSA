class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
            int i,sum=0;
            int mxsum=INT_MIN;
            for(i=0;i<nums.size();i++){
                sum=sum+nums[i];
                mxsum=max(mxsum,sum);
                if(sum<0){
                    sum=0;
                }
            }
            return mxsum;
        }
    };