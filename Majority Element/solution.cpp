class Solution {
    public:
        int majorityElement(vector<int>& nums) {
            int i=0,j,n=nums.size();
            for(i=0;i<n;i++){
                int freq=0;
                for(j=i;j<n;j++){
                    if (nums[i]==nums[j]){
                        freq++;
                    }
                }
                if(freq>n/2){
                    return nums[i];
                }
            }
            return -1;
        }
    };