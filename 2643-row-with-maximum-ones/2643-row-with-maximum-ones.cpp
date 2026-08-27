class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int mxone=0;
        int mxrow=0;
        int r=mat.size()-1;
        int c=mat[0].size()-1;
        for(int i=0;i<=r;i++){
            int ones=0;
            for(int j=0;j<=c;j++){
                if(mat[i][j]==1) ones++;
            }
            if(ones>mxone){
                mxone=ones;
                mxrow=i;
            }
        }
    return {mxrow,mxone};
    }
};