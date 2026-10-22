class Solution {
public:
    int totalsum=0;
    int mxSubarray(vector<int>& nums){
        int mx=INT_MIN;
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            totalsum+=nums[i];
            sum+=nums[i];
            mx=max(mx,sum);
            if(sum<0){
                sum=0;
            }  
        }
        return mx;
    }
    int mnSubarray(vector<int>& nums){
        int sum=0;
        int mn=INT_MAX;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
            mn=min(mn,sum);
            if(sum>0){
                sum=0;
            }  
        }
        return mn;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int mx=nums[0];
        int normalsum=mxSubarray(nums);
        if(normalsum<0) return normalsum;                   //all negative
        int mnsubarr=mnSubarray(nums);
        //mxcircularsum=totalsum-minsubarray sum
        int circularsum=totalsum-mnsubarr;
        return max(normalsum,circularsum);
    }
};