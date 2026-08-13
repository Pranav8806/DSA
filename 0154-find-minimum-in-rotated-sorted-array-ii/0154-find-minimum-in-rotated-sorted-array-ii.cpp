class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int low=0,high=nums.size()-1;
        int mn=INT_MAX;
        while(low<=high){
            int mid=(low+high)/2;
            //duplcates
            if (nums[low] == nums[mid] && nums[mid] == nums[high]){
                mn=min(mn,nums[low]);
                high=high-1;
                low=low+1;
                continue;
            }
            //already sorted
            if(nums[low]<nums[high]) return min(mn,nums[low]);
            //left half sorted
            else if(nums[mid]>=nums[low]){
                mn=min(mn,nums[low]);
                low=mid+1;
            }
            //right half sorted
            else{
                mn=min(mn,nums[mid]);
                high=mid-1;
            }
        }
        return mn;
    }
};