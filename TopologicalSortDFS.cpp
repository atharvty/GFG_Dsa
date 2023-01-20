class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	
	void dfs(int s, vector<int> &vis, vector<int> adj[], stack<int> &stk)
	{
	    vis[s] = 1;
	    for(int i = 0; i<adj[s].size(); i++)
	    {
	        if(!vis[adj[s][i]])
	        {
	            dfs(adj[s][i],vis,adj,stk);
	        }
	    }
	    stk.push(s);
	}
	
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int> vis(V,0);
	    stack<int> stk;
	    for(int i = 0; i<V; i++)
	        if(!vis[i])
	            dfs(i,vis,adj,stk);
	    
	    vector<int> topo;
	    while(!stk.empty())
	    {
	        topo.push_back(stk.top());
	        stk.pop();
	    }
	    
	    return topo;
	    
	}
};
