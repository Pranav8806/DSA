class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        //finding negative
        int neg=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]<0){
                low=mid+1;
                neg=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        low=0;
        high=nums.size()-1;
        //finding positive
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>0){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        int pos= nums.size() - low;
    return max(neg,pos);
    }
};