class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<int>rowwise(m,0);
        vector<int>colwise(n,0);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                rowwise[i]+=grid[i][j];
                colwise[j]+=grid[i][j];
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                grid[i][j]=rowwise[i]+colwise[j]-(m-rowwise[i])-(n-colwise[j]);
            }
        }
    return grid;
    }
};