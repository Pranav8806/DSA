class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int st=1;
        int ed=*max_element(nums.begin(),nums.end());
        int mn=INT_MAX;
        while(st<=ed){
            int mid=(st+ed)/2;
            int sum=0;
            for(int i=0;i<nums.size();i++){
                sum+=ceil(nums[i]/double(mid));
            }
            if(sum<=threshold) {
                mn=min(mn,mid);
                ed=mid-1;
            }
            else if(sum>threshold) st=mid+1;
        }
        return mn;
    }
};