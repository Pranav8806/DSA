class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        vector<int>left(n,1);
        vector<int>right(n,1);
        int cndy=1;
        for(int i=1;i<n;i++){
            if(ratings[i]>ratings[i-1]){
                cndy++;
                left[i]=cndy;
            }
            else{
                cndy=1;
                left[i]=cndy;
            }
        }
        for(int i=n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]){
                cndy++;
                right[i]=cndy;
            }
            else{
                cndy=1;
                right[i]=cndy;
            }
        }
        int res=0;
        for(int i=0;i<n;i++){
            res+=max(left[i],right[i]);
        }
    return res;

    }
};