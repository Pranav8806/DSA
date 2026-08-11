class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target) return true;
            if(nums[mid]==nums[low] && nums[low]==nums[high] && nums[mid]==nums[high]){
                low=low+1;
                high=high-1;
                continue;
            }
            //left half is sorted
            if(nums[low]<=nums[mid]){
                //target lies in left half
                if(target<=nums[mid] && target>=nums[low]){
                    high=mid-1;
                }
                else low=mid+1;
            }
            //right half is sorted
            else{
                //lies in right half
                if(target>=nums[mid]&& target<=nums[high]){
                    low=mid+1;
                }
                else high=mid-1;
            }
        }
        return false;
    }
};