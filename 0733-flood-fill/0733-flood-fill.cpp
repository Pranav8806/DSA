class Solution {
public:
    void dfs(vector<vector<int>>& image,vector<vector<bool>>&vis,int i,int j,int color,int src,int m,int n)
    {
        if(i<0 || j<0 || i>m-1 || j>n-1) return ;
        if(vis[i][j] || image[i][j]!=src) return;
        if(image[i][j]==src) {
            vis[i][j]=true;
            image[i][j]=color;
        }
        dfs(image,vis,i-1,j,color,src,m,n);   //top
        dfs(image,vis,i,j+1,color,src,m,n);    //right
        dfs(image,vis,i,j-1,color,src,m,n);   //left
        dfs(image,vis,i+1,j,color,src,m,n);  //bottom
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image.empty() || image[0].empty())
            return image;
        int src=image[sr][sc];
        int m=image.size();
        int n=image[0].size();
        vector<vector<bool>>vis(m, vector<bool>(n, false));
        dfs(image,vis,sr,sc,color,src,m,n);
        return image;
    }
};