#include<iostream>
#include<vector>
#include<list>
#include<queue>
using namespace std;
class Graph
{
    public:
    int V;
    list<int> *l;
    Graph(int V){
        this->V=V;
        l=new list<int>[V];
    }
    void addEdge(int u,int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }    
    void print(){
        for(int i=0;i<V;i++){
            cout<<i <<" : ";
            for (int neigh : l[i]){
                cout<<neigh<<" ";
            }
            cout<<endl;
        }
    }
    //bfs
    void bfs(){
        queue<int>q;
        q.push(0);
        vector<bool>vis(V,false);
        vis[0]=true;
        while (q.size()>0)
        {
            int u=q.front();
            cout<<u<<" ";
            q.pop();
            for(auto neigh:l[u]){
                if(!vis[neigh]){
                    vis[neigh]=true;
                    q.push(neigh);
                }
            }
        }
        cout<<endl;
    }
    //dfs
    void dfshepler(int u,vector<bool>&vis){
        cout<<u<<" ";
        vis[u]=true;
        for(auto neigh:l[u]){
            if(!vis[neigh]){
                dfshepler(neigh,vis);
            }
        }
    }   
    void dfs(){
        int src=0;
        vector<bool>vis(V,false);
        for(int i=0;i<V;i++){
            if(!vis[i]){        //for disconnected graph
                dfshepler(i,vis);
            }
        }
    }
};
int main(){
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,4);
    g.print();
    g.bfs();
    g.dfs();
}


