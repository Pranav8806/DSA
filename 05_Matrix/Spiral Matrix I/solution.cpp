class Solution {
    public:
        vector<int> spiralOrder(vector<vector<int>>& matrix) {
            int m=matrix.size(),n=matrix[0].size();
            vector<int>ans;
            int sr=0,er=m-1,sc=0,ec=n-1;
            while(sr<=er && sc<=ec){
                 //for top Row
                for(int i=sc;i<=ec;i++){
                    ans.push_back(matrix[sr][i]);
                    
                }
                //for ending column
                for(int j=sr+1;j<=er;j++){
                    ans.push_back(matrix[j][ec]);
                }
                //for last row
                for(int k=ec-1;k>=sc;k--){
                    if(sr==er) break;
                    ans.push_back(matrix[er][k]);
                }
                //for starting column
                for(int l=er-1;l>=sr+1;l--){
                    if(sc==ec) break;
                    ans.push_back(matrix[l][sc]);
                }
            sr++,sc++,er--,ec--;   
            
            }
            return ans;
        }
    };