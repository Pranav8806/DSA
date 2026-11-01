class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int indx=nums.size()/2;
        sort(nums.begin(),nums.end());
        int tar=nums[indx];
        int mvs=0;
        for(auto num:nums){
            mvs+=abs(num-tar);
        }
    return mvs;
    }
};