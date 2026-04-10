class Solution {
    public:
        int majorityElement(vector<int>& nums) {
            int i, n=nums.size();
            int freq=0,ans=0;
            for(i=0;i<n;i++){
                if (freq==0){
                    ans=nums[i];
                }
                if(ans==nums[i]) freq++;
                else freq--;
            }
            return ans;
        }
    };