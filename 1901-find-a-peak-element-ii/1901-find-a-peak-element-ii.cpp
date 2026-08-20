class Solution {
public:
    int maxrow(vector<vector<int>>& mat,int m,int mid){
        int mxindx=-1;
        int mx=INT_MIN;
        for(int i=0;i<m;i++){
            if(mat[i][mid]>mx){
                mx=mat[i][mid];
                mxindx=i;
            }
        }
        return mxindx;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int st=0,ed=n-1;
        while(st<=ed){
            int mid=(st+ed)/2;
            int mxrow=maxrow(mat,m,mid);
            int left=INT_MIN;
            int right=INT_MIN;
            if(mid-1>=0) left=mat[mxrow][mid-1];
            if(mid+1<n) right=mat[mxrow][mid+1];
            if(mat[mxrow][mid]>left && mat[mxrow][mid]>right) return{mxrow,mid};
            else if(mat[mxrow][mid+1]>mat[mxrow][mid]) st=mid+1;
            else ed=mid-1;
        }

        return{};
    }
};