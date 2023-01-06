class Solution {
    
    private:
    
    void solve(int node, vector<int>&vis, vector<int>&dfs, vector<int>adj[]){
        
        vis[node]=1;
        dfs.push_back(node);
        
        for(auto it: adj[node]){
            if(!vis[it]){
                solve(it, vis, dfs, adj);
            }
        }
    }
    
    
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        
        vector<int> vis(V,0);
        vector<int> dfs;
        
        for(int i=0; i<V; i++){
            if(!vis[i])
            {
                solve(i, vis, dfs, adj);
            }
        }
        
        return dfs;
    }
};
