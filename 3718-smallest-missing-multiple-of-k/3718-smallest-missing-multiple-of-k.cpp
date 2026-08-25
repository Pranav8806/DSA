class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<bool>freq(101);
        for(auto num :nums){
           freq[num]=true;
        }
        int n=k;
        while(n<101){
            if(!freq[n]) return n;
            n=n+k;
        }
        while(n%k!=0){
            n+=k;
        };
        return n;
    }
};