class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        if(nums.size()<=1) return nums.size();
        int mxlen=INT_MIN;
        for(auto num:st){
            if(!st.count(num-1))                     //it is the starting point    
            {
                int len=1;        
                while(st.count(num+len)){
                    len++;
                }
                mxlen=max(mxlen,len);
            }
        }
        if(mxlen==INT_MIN) return 1;
    return mxlen;
    }
};