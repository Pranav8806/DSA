class Solution {
public:
    int daysr(vector<int>& weights, int cap){
        int day=1,load=0;
        for(int i=0;i<weights.size();i++){
            if(load+weights[i]>cap){
            day=day+1;
            load=weights[i];
            }
            else{
                load+=weights[i];
            }
        }
        return day;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=0;
        for(auto it :weights){
            high+=it;
        }
        while(low<=high){
            int mid=(low+high)/2;
            int daysreq=daysr(weights,mid);
            if(daysreq<=days){
                high=mid-1;
            }
            else low =mid+1;
           
        }
         return low;
    }
};