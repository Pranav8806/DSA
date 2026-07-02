class Solution {
    public:
        bool isValidSudoku(vector<vector<char>>& board) {
            for(int i=0;i<board.size();i++){
                for(int j=0;j<board[0].size();j++){
                    if(board[i][j]!='.'){
                        int dig=board[i][j];
                        //valid row
                        for(int k=0;k<9;k++){
                            if(k!=j && board[i][k]==dig) return false;
                        }
                        //valid column
                        for(int k=0;k<9;k++){
                            if(k!=i && board[k][j]==dig) return false;
                        }
                        //valid grid
                        int sr=-1,sc=-1;
                        int er=-1,ec=-1;
                        if(i>=0 && i<3){
                            sr=0,er=2;
                        }
                        if(j>=0 && j<3){
                            sc=0,ec=2;
                        }
                        if(i>=3 && i<6){
                            sr=3,er=5;
                        }
                        if(j>=3 && j<6){
                            sc=3,ec=5;
                        }
                        if(i>=6 && i<9){
                            sr=6,er=8;
                        }
                        if(j>=6 && j<9){
                            sc=6,ec=8;
                        }
                        for(int k=sr;k<=er;k++){
                            for(int l=sc;l<=ec;l++){
                                if((k!=i || l!=j ) && board[k][l]==dig) return false;
                            }
                        } 
                    } 
                }
            }
        return true;     
        } 
    };