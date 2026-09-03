class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int countev=0,countodd=0;
        int n=nums1.size();
        for(int i=0;i<n;i++){
            if(nums1[i]%2==0) countev++;
            else countodd++;
        }
        int mnodd=INT_MAX;
        if(countev==n || countodd==n) return true;
        for(int i=0;i<n;i++){
            if(nums1[i]!=0) mnodd=min(mnodd,nums1[i]);
        }
        for(int i=0;i<n;i++){
            if(nums1[i]%2==0 && nums1[i]-mnodd<1) return false ; 
        }

        return true ;  
    }
};