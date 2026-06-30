class Solution {
    public:
        vector<int> maxSlidingWindow(vector<int>& nums, int k) { 
            vector<int>ans;
            deque<int>dq;
            //finding maximum for first window
            for(int i=0;i<k;i++){
                while(!dq.empty() && nums[dq.back()]<=nums[i]){
                    dq.pop_back();
                }
                dq.push_back(i);
            }
            //finding maximum for other windows
            for(int i=k;i<nums.size();i++){
                //storing ans of previous window
                ans.push_back(nums[dq.front()]);
                //removing previous window indices
                while(!dq.empty() && i-dq.front()>=k){
                    dq.pop_front();
                }
                //only maximum element for particular window should remain in deque
                while(!dq.empty() && nums[dq.back()]<=nums[i]){
                    dq.pop_back();
                }
                dq.push_back(i);
            }
            ans.push_back(nums[dq.front()]); //for last window
            return ans;
        }
    };