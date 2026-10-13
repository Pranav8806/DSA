class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<0)
            {
                nums[i]=-nums[i];
            }
        }
        vector<int>arr(n,0);
        sort(nums.begin(), nums.end(), greater<int>());
        int j=0;;
        for(int i=0;i<n && j<n;i+=2,j++){
            arr[i]=nums[j];
        }
        for(int i=1;i<n && j<n ;i+=2,j++){
            arr[i]=nums[j];
        }
        long long ans=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                ans+=arr[i]*arr[i];
            }
            else{
                ans-=arr[i]*arr[i];
            }
        }
        return ans;
    }
};