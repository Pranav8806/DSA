class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int lp=0;
        int rp=0;
        int sum=0;
        int cnt=0;
        int avg;
        while(rp<arr.size()){
            sum+=arr[rp];
            int avg=(sum)/(rp-lp+1);
            if(rp-lp+1==k){
                if(avg>=threshold ) cnt++;
                sum-=arr[lp];
                lp++;
            }
        rp++;
        }
    return cnt;
    }
};