class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mn=*min_element(nums.begin(),nums.end());
        int mvs=0;
        for(auto num:nums){    //instead decrement each element by 1 in one move to make every element =min
            mvs+=num-mn;

        }
    return mvs;
    }
};