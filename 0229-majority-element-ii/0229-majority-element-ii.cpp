class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums;
        vector<int>ans;
        int ele1=-1;
        int ele2=-1;
        int cnt1=0;
        int cnt2=0;
        for(auto num:nums){
            if(cnt1==0 && num!=ele2){
                ele1=num;
                cnt1++;
            }
            else if(cnt2==0 && num!=ele1){
                ele2=num;
                cnt2++;
            }
            else if(num==ele1){
                cnt1++;
            }
            else if(num==ele2){
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        cnt1=0;
        cnt2=0;
        for(auto it :nums){       // verify
            if(it==ele1) cnt1++;
            else if(it==ele2) cnt2++;
        }
        if(cnt1>n/3) ans.push_back(ele1);
        if(cnt2>n/3) ans.push_back(ele2);
        return ans;
    }
};