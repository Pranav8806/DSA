class Solution {
public:
    void dfs(vector<vector<int>>& grid,vector<vector<bool>>&vis,int i,int j,int m,int n,int &cnt){
        vis[i][j]=true;
        cnt++;
        for(int r=0;r<m;r++){
            if(grid[r][j]==1 && !vis[r][j]){
                dfs(grid,vis,r,j,m,n,cnt);
            }
        }
        for(int c=0;c<n;c++){
            if(grid[i][c]==1 && !vis[i][c]){
                dfs(grid,vis,i,c,m,n,cnt);
            }
        }
    }
    int countServers(vector<vector<int>>& grid) {
        if(grid.empty() || grid[0].empty())
            return 0;
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<bool>>vis(m, vector<bool>(n, false));
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1 && !vis[i][j]){
                    int cnt=0;
                    dfs(grid,vis,i,j,m,n,cnt);
                    if(cnt>1){
                        ans+=cnt;
                    }
                }
            }
        }
        return ans;
    }
};