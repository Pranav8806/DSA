class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                //top
                int top=INT_MIN;
                if(i-1>=0)  top=mat[i-1][j];
                //bottom
                int bottom=INT_MIN;
                if(i+1<m)  bottom=mat[i+1][j];
                //left
                int left=INT_MIN;
                if(j-1>=0)  left=mat[i][j-1];
                //right
                int right=INT_MIN;
                if(j+1<n)  right=mat[i][j+1];
                if(mat[i][j]>left && mat[i][j]>right && mat[i][j]>top && mat[i][j]>bottom) return{i,j};
            }
        }
        return{};
    }
};