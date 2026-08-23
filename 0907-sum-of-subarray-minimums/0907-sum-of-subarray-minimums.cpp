class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        long long sum=0;
        const int mod=1e9+7;
        //finding previous smaller distance
        stack<int>st;
        vector<int>left(arr.size());
        for(int i=0;i<arr.size();i++){
            while(!st.empty() && arr[st.top()]>arr[i]){
                st.pop();
            }
            if(st.empty()) left[i]=i+1;
            else left[i]=i-st.top();;
            st.push(i);
        }
        while(!st.empty())
            st.pop();
        //finding next smaller distance
        vector<int>right(arr.size());
        for(int i=arr.size()-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            if(st.empty()) right[i]=arr.size()-i;
            else right[i]=st.top()-i;
            st.push(i);
        }
        for(int i=0;i<arr.size();i++){
            //contributiion of each element 
            sum=(sum+(long long)arr[i]*left[i]*right[i])%mod;
        }
        return int(sum);
    }
};