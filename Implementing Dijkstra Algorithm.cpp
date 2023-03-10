class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
        pq.push({0,S});
        vector<int> dist(V,1e9);
        dist[S] = 0;
        while(!pq.empty()){
            pair<int,int> top = pq.top();
            pq.pop();
            int dis = top.first;
            int node = top.second;
            for(auto it: adj[node]){
                int v = it[0];
                int w = it[1];
                if(w+dis<dist[v]){
                   dist[v]=w+dis;
                   pq.push({dist[v],v});
                }
            }
        }
        return dist;
    }
};
