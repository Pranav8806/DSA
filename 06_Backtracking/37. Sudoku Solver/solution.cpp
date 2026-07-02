class Solution {
    public:
        bool isvalidpos(vector<vector<char>>& board,int row,int col,char dig){
            //valid row
            for(int i=0;i<9;i++){
                if(board[row][i]==dig) return false;
            }
            //valid column
            for(int i=0;i<9;i++){
                if(board[i][col]==dig) return false;
            }
            //valid grid
            int sr=-1,sc=-1;
            int er=-1,ec=-1;
            if(row>=0 && row<3){
                sr=0,er=2;
            }
            if(col>=0 && col<3){
                sc=0,ec=2;
            }
            if(row>=3 && row<6){
                sr=3,er=5;
            }
            if(col>=3 && col<6){
                sc=3,ec=5;
            }
            if(row>=6 && row<9){
                sr=6,er=8;
            }
            if(col>=6 && col<9){
                sc=6,ec=8;
            }
            for(int i=sr;i<=er;i++){
                for(int j=sc;j<=ec;j++){
                    if(board[i][j]==dig) return false;
                }
            }
        return true;
        }
        bool sudoku(vector<vector<char>>& board,int row,int col){
            if(row==9){
                return true;   //all cells filled
            }
            int nextrow=row,nextcol=col+1;
            if(nextcol==9) {
                nextcol=0;
                nextrow=row+1;
            }
            if(board[row][col]!='.'){
                return sudoku(board,nextrow,nextcol);   
            }
            else{
                for(char dig='1';dig<='9';dig++){
                    if(isvalidpos(board,row,col,dig)){
                        board[row][col]=dig;
                        if (sudoku(board,nextrow,nextcol)){
                            return true;
                        }
                        board[row][col]='.';                    //bactrack if invlaid sudoku
                    }
                }
            }
            return false;
        }
        void solveSudoku(vector<vector<char>>& board) {
            sudoku(board,0,0);
        }
    };