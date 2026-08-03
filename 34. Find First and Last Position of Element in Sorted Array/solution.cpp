class Solution {
    public:
        vector<int> searchRange(vector<int>& nums, int target) {
            if(nums.size()==0) return{-1,-1};
            vector<int>ans(2,-1);
            int st=0,ed=nums.size()-1;
            //first occurance
            while(st<=ed){
                int mid=st+(ed-st)/2;
                if(nums[mid]==target) {
                    ans[1]=mid;            
                    ed=mid-1;               //to check values before mid
                }
                else if(target>nums[mid]) st=mid+1;
                else ed=mid-1;
            }       
            //second occurance
            st=0,ed=nums.size()-1;
            while(st<=ed){
                int mid=st+(ed-st)/2;
                if(nums[mid]==target) {
                    ans[0]=mid;
                    st=mid+1;                   //to check values after mid
                }
                else if(target>nums[mid]) st=mid+1;
                else ed=mid-1;
            }
            
            sort(ans.begin(),ans.end());
        return ans;    
        }
    };