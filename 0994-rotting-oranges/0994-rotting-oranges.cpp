class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        if(grid.empty() || grid[0].empty())
            return 0;
        int m=grid.size();
        int n=grid[0].size();
        queue<pair<pair<int,int>,int>>q;
        vector<vector<bool>>vis(m, vector<bool>(n, false));
        //finding mutiple source nodes
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                }
            }
        }
        int minute=0;
        while(!q.empty()){
            auto f=q.front();
            int i=f.first.first;
            int j=f.first.second;
            int time=f.second;
            minute=max(minute,time);
            q.pop();
            if(i-1>=0 && grid[i-1][j]==1 && !vis[i-1][j]){
                vis[i-1][j]=true;
                q.push({{i-1,j},time+1});
            }
            if(j-1>=0 && grid[i][j-1]==1 && !vis[i][j-1]){
                vis[i][j-1]=true;
                q.push({{i,j-1},time+1});
            }
            if(i+1<=m-1 && grid[i+1][j]==1 && !vis[i+1][j]){
                vis[i+1][j]=true;
                q.push({{i+1,j},time+1});
            }
            if(j+1<=n-1 && grid[i][j+1]==1 && !vis[i][j+1]){
                vis[i][j+1]=true;
                q.push({{i,j+1},time+1});
            }
        }
         for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1 && !vis[i][j]) return -1;
            }
        }
        return minute;
    }
};