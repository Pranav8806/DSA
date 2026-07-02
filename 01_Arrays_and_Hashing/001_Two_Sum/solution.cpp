class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int>ans;
            unordered_map<int,int>m;
            for(int i=0;i<nums.size();i++){
                int second=target-nums[i];
                if(m.count(second)){     // count checks if second element exist in map
                    ans.push_back(i);
                    ans.push_back(m[second]);
                    break;
                }
                m[nums[i]]=i;        //nums[i] is stored as key and i as value
            }  
        return ans;    
        }
    };