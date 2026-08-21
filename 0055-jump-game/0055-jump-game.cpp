class Solution {
public:
    bool canJump(vector<int>& nums) {
        int mxindx=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i>mxindx) return false;  //occurance of 0
            mxindx=max(mxindx,nums[i]+i);
            if(mxindx>=nums.size()-1) return true;
        }
        return false;
    }
};