class Solution {
    public:
        vector<vector<int>> generateMatrix(int n) {
            vector<vector<int>>ans(n, vector<int>(n));
            int k=1;
            int sc=0,sr=0,ec=n-1,er=n-1;
            while(sc<=ec && sr <= er && k<=(n*n)){
                for(int i=sc;i<=ec;i++){
                    ans[sr][i]=k++;         
                }
                for(int i=sr+1;i<=er;i++){
                    ans[i][ec]=k++;         
                }
                for(int i=ec-1;i>=sc;i--){
                    ans[er][i]=k++;         
                }
                for(int i=er-1;i>=sr+1;i--){
                    ans[i][sc]=k++;         
                }
                sc++,sr++,er--,ec--;
            }
            return ans;
        }
    };