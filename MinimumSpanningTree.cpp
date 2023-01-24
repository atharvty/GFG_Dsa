class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        vector<int> vis(V, 0);
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
        pq.push({0,0});
        int ans = 0;
        while(!pq.empty()) {
            auto it = pq.top();
            pq.pop();
            int wt = it.first;
            int node = it.second;
            if(vis[node]==1) continue;
            vis[node]=1;
            ans+=wt;
            for(auto i : adj[node]) {
                int v = i[0];
                int wt = i[1];
                pq.push({wt,v});
            }
        }
        return ans;
    }
};
