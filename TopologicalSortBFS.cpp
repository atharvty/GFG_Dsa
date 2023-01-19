class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	void dfs(int i,vector<int> adj[],vector<int>&vis,stack<int>&q)
	{
	    vis[i]=1;
	    for(auto it:adj[i])
	    {
	        if(!vis[it])
	        {
	            dfs(it,adj,vis,q);
	        }
	    }
	    q.push(i);
	    return;
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int>vis(V,0);
	    stack<int>q;
	    for(int i=0;i<V;i++)
	    {
	        if(!vis[i])
	        {
	            dfs(i,adj,vis,q);
	        }
	    }
	    vector<int>res;
	    while(!q.empty())
	    {
	        res.push_back(q.top());
	        q.pop();
	    }
	    return res;
	}
};
