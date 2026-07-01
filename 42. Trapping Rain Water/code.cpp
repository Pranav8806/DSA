class Solution {
    public:
        int trap(vector<int>& height) {
            int n=height.size();
            if(n==0) return 0;
            int l=0,r=n-1;
            int lmax=INT_MIN,rmax=INT_MIN;
            int ans=0;
            while(l<=r){
                lmax=max(lmax,height[l]);
                rmax=max(rmax,height[r]);
                if(lmax<rmax){
                    ans+=lmax-height[l];
                    l++;
                }
                else {
                    ans+=rmax-height[r];
                    r--;
                }
            }
        return ans;
        }
    };