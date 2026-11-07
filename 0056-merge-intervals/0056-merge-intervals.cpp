class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<intervals.size();i++){
            int st=intervals[i][0];
            int ed=intervals[i][1];
            if(!ans.empty() && ans.back()[1]>=ed){
                continue;
            }
            else{
                for(int j=i+1;j<intervals.size();j++){
                    if(intervals[j][0]<=ed){
                        ed=max(ed,intervals[j][1]);
                    }
                    else{
                        break;
                    }
                }
            }
            ans.push_back({st,ed});
        }
        return ans;
    }
};