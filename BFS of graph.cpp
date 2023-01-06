class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        int vis[V+1] = {0};
        vis[0] =1;
        queue <int> q;
        q.push(0);
        vector <int> bfs;
        
        while(!q.empty()){
            int node = q.front();//getting the node
            q.pop();//popping the node
            bfs.push_back(node);//storing the node in our answer
            
            
            for(auto it : adj[node]){
                if (!vis[it]){
                    vis[it] =1;
                    q.push(it);
                }
                
            }
            
        }
        
        return bfs;
    }
    
};
