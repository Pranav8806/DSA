class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int mxele=nums[0];
        int mxindx=0;
        int mnele=nums[0];
        int mnindx=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<mnele){
                mnele=nums[i];
                mnindx=i;
            }
            if(nums[i]>mxele){
                mxele=nums[i];
                mxindx=i;
            }
        }
        int op1=(mxindx+1)+(n-mnindx);
        int op2=(mnindx+1)+(n-mxindx);
        int op3=max(mxindx,mnindx)+1;
        int op4=n - min(mnindx, mxindx);
    return min({op1, op2, op3,op4});
    }
};