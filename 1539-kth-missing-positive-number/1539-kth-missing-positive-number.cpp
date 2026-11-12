class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int st=0;
        int ed=arr.size()-1;
        while(st<=ed){
            int mid=st+(ed-st)/2;
            int actual=mid+1;
            int miss=arr[mid]-actual;
            if(miss>=k) ed=mid-1;
            else st=mid+1;
        }
        return st+k;
    }
};