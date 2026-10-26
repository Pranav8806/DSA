class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        long long ans=0; 
        vector<pair<int,int>>v;   
        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            string s=to_string(nums[i]);
            sort(s.begin(), s.end(), greater<int>());
            int res=stoi(s);
            v.push_back({x,res});
        }
        sort(v.begin(), v.end(), [](const auto& a, const auto& b) {
            return (a.second - a.first) > (b.second - b.first);
        });
        for(auto it:v){
            if(k>0 && it.second>it.first)
            {
                ans+=it.second;
                k--;
            }
            else{
                ans+=it.first;
            }
        }
        return ans;
    }
};