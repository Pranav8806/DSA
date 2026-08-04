class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int low=-1;
        int high=-1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]!=1){
                low=nums[i-1]+1;
                high=nums[i];
            }
            while(low!=high){
                ans.push_back(low);
                low++;
            }
        }
        return ans;
    }
};