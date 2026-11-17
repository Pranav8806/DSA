class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        queue<pair<int,int>>q;
        //find vertices that are located at corners
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i-1<0 && grid[i][j]==1){
                    q.push({i,j});
                }
                if(i+1==m && grid[i][j]==1){
                    q.push({i,j});
                }
                if(j-1<0 && grid[i][j]==1){
                    q.push({i,j});
                }
                if(j+1==n && grid[i][j]==1){
                    q.push({i,j});
                }
            }
        }
        vector<vector<bool>>vis(m,vector<bool>(n,false));
        //bfs
        while(!q.empty()){
            auto f=q.front();
            q.pop();
            int i=f.first;
            int j=f.second;
            vis[i][j]=true;
            if(i-1>=0 && grid[i-1][j]==1 && !vis[i-1][j]){
                vis[i-1][j]=true;
                q.push({i-1,j});
            }
            if(i+1<m && grid[i+1][j]==1 && !vis[i+1][j]){
                vis[i+1][j]=true;
                q.push({i+1,j});
            }
            if(j-1>=0 && grid[i][j-1]==1 && !vis[i][j-1]){
                vis[i][j-1]=true;
                q.push({i,j-1});
            }
            if(j+1<n && grid[i][j+1]==1 && !vis[i][j+1]){
                vis[i][j+1]=true;
                q.push({i,j+1});
            }
        }
        int cnt=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1 && !vis[i][j]) cnt++;
            }
        }
        return cnt;
    }
};