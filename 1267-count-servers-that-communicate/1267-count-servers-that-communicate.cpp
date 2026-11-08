class Solution {
public:

    void dfs(int i, int j, vector<vector<int>>& grid,
             vector<vector<bool>>& vis, int& cnt) {

        vis[i][j] = true;
        cnt++;

        int m = grid.size();
        int n = grid[0].size();

        // Traverse entire row
        for(int col = 0; col < n; col++) {
            if(grid[i][col] == 1 && !vis[i][col]) {
                dfs(i, col, grid, vis, cnt);
            }
        }

        // Traverse entire column
        for(int row = 0; row < m; row++) {
            if(grid[row][j] == 1 && !vis[row][j]) {
                dfs(row, j, grid, vis, cnt);
            }
        }
    }

    int countServers(vector<vector<int>>& grid) {

        int m = grid.size();
        int n = grid[0].size();

        vector<vector<bool>> vis(m, vector<bool>(n, false));

        int ans = 0;

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {

                if(grid[i][j] == 1 && !vis[i][j]) {

                    int cnt = 0;

                    dfs(i, j, grid, vis, cnt);

                    if(cnt > 1) {
                        ans += cnt;
                    }
                }
            }
        }

        return ans;
    }
};