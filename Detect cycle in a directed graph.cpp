class Solution {
  private: 
    bool dfs(int node, int v, vector<int> adj[], vector<int> &vis, vector<int> &pathVis) {
        vis[node] = 1;
        pathVis[node] = 1;
        
        for(auto it: adj[node]) {
            if(!vis[it]) {
                if(dfs(it, v, adj, vis, pathVis)) return true;
            }
            else if(pathVis[it])
                return true;
        }
        pathVis[node] = 0;
        return false;
    }
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        vector<int> vis(V);
        vector<int> pathVis(V);
        
        for(int i = 0; i < V; i++) {
            if(!vis[i]) {
                if(dfs(i, V, adj, vis, pathVis)) return true;
            }
        }
        
        return false;
    }
};
