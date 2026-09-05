class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int mnindx=INT_MAX;
        vector<int> prefixMax(n), suffixMin(n);
        
        prefixMax[0] = nums[0];
        for (int i = 1; i < n; i++) {
            prefixMax[i] = max(prefixMax[i - 1], nums[i]);
        }
        
        suffixMin[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            suffixMin[i] = min(suffixMin[i + 1], nums[i]);
        }
        
        for (int i = 0; i < n; i++) {
            if (prefixMax[i] - suffixMin[i] <= k) {
                mnindx=min(mnindx,i);
                return mnindx;
            }
        }
        
        return -1;
    }
};