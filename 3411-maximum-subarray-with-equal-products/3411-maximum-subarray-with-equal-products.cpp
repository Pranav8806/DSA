class Solution {
public:
    int maxLength(vector<int>& nums) {
        if(nums.size()==1) return 1;
        int mxlen=0;
        int alllcm=1;
        int mxval=0;
        for (int x : nums) {
            mxval = max(mxval, x);
            alllcm = lcm(alllcm, x);
        }
        int limit = alllcm * mxval;
        for(int i=0;i<nums.size();i++){
            long long prod=1;
            long long g=0;
            long long l=1;
            for(int j=i;j<nums.size();j++){
                prod=prod*(long long)nums[j];
                g=gcd(g,(long long)(nums[j]));
                l=lcm(l,(long long)(nums[j]));
                if(prod==g*l){
                    mxlen=max(mxlen,j-i+1);
                }
                if (prod > limit) {
                    break;
                }
            }
        }
    return mxlen;
    }
};