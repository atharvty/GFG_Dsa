class Solution {
  public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        // Code here
        vector<pair<int,int>>adj[n+1];
        
        for(auto it: edges)
        {
            adj[it[0]].push_back({it[1], it[2]});
            adj[it[1]].push_back({it[0], it[2]});
        }
        
        vector<int> dist(n+1,1e9);
        vector<int> parent(n+1);
        
        for(int i=1;i<=n;i++)
        {
            parent[i]=i;
        }
        
        dist[1]=0;
         priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;
         
         pq.push({0, 1});
         
         while(!pq.empty())
         {
             int dis = pq.top().first;
             int node = pq.top().second;
             
             pq.pop();
             
             for(auto it:adj[node])
             {
                 int adjnode = it.first;
                 int weight = it.second;
                 if(dis + weight < dist[adjnode])
                 {
                     dist[adjnode]=  dis + weight;
                     pq.push({dist[adjnode], adjnode});
                     parent[adjnode]= node;
                 }
             }
         }
         
         if(dist[n]==1e9)
         {
             return{-1};
         }
         vector<int> ans;
         int node=n;
         
         while(parent[node]!=node)
         {
             ans.push_back(node);
             node = parent[node];
         }
         ans.push_back(1);
         
         reverse(ans.begin(), ans.end());
         return ans;
         
         
        
    }
};
