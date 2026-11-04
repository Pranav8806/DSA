class Solution {
public:
    bool isCycle(int curr,vector<bool>&vis,vector<bool>&currpath,vector<vector<int>>& adj){
        vis[curr]=true;
        currpath[curr]=true;
        for(auto neigh:adj[curr]){
            if(!vis[neigh]){
                if(isCycle(neigh,vis,currpath,adj)) return true;
            }
            else if(vis[neigh] && currpath[neigh]) return true;
        }
        currpath[curr]=false;
        return false;
      }
    stack<int>st;
    void dfstopo(int curr,vector<bool>&vis,vector<vector<int>> &adj){
        vis[curr]=true;
        for(auto neigh:adj[curr]){
            if(!vis[neigh]){
                dfstopo(neigh,vis,adj);
            }
        }
        st.push(curr);
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>ans;
        int V=numCourses;
        if(prerequisites.empty()) {
            for(int i=0;i<V;i++){
                ans.push_back(i);
            }
            return ans;
        }
        vector<vector<int>> adj(V);
        for(auto edge:prerequisites){
            int u=edge[0];
            int v=edge[1];
            adj[v].push_back(u);
        }
        vector<bool>vis(V,false);
        vector<bool>currpath(V,false);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(isCycle(i,vis,currpath,adj)) return {};  
            }
        }
        for(int i=0;i<V;i++){
            vis[i]=false;
        }
        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfstopo(i,vis,adj);
            }
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};