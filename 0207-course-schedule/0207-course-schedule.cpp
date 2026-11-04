class Solution {
public:
    bool dfs(int curr,vector<bool>&vis,vector<bool>&currpath,vector<vector<int>>& adj){
        vis[curr]=true;
        currpath[curr]=true;
        for(auto neigh:adj[curr]){
            if(!vis[neigh]){
                if(dfs(neigh,vis,currpath,adj)) return true;
            }
            else if(vis[neigh] && currpath[neigh]) return true;
        }
        currpath[curr]=false;
        return false;
      }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int V=numCourses;
        vector<vector<int>> adj(V);
        vector<bool>currpath(V,false);
        vector<bool>vis(V,false);
        for(auto edge:prerequisites){
            int u=edge[0];
            int v=edge[1];
            adj[v].push_back(u);
        }
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(dfs(i,vis,currpath,adj)) return false;  
            }
        }
    return true;
    }
};