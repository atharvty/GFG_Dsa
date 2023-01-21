class Solution {
    private:
    bool check(int node, int V, vector<int>adj[], int color[]){
        color[node]=0;
        
        queue<int> q;
        q.push(node);
        
        while(!q.empty()){
            int x = q.front();
            q.pop();
            
            for(auto it: adj[x]){
                if(color[it]==-1){
                    color[it] = !color[x];
                    q.push(it);
                }else if(color[it]==color[x]){
                    return false;
                }
            }
        }
        return true;
    }
public:
	bool isBipartite(int V, vector<int>adj[]){
	    int color[V];
	    for(int i=0;i<V;i++){
	        color[i]=-1;
	    }
	    for(int i=0;i<V;i++){
	        if(color[i]==-1){
	            if(check(i, V, adj, color)==false){
	                return false;
	            }
	        }
	    }
	    return true;
	    
	}

};
