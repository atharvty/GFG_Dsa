// User function Template for C++

class Solution {
  public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> destination) {
        
        // Edge Case: if the source is only the destination.
        if (source.first == destination.first && source.second == destination.second){
            return 0;
        }
        
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>dist(n,vector<int>(m,1e9));
        
        int delr[] = {-1,0,1,0};
        int delc[] = {0,1,0,-1};
        queue<pair<int,pair<int,int>>>q; // <dist,cordinates of node>
        q.push({0,{source.first,source.second}});
        while(!q.empty()){
            int dis = q.front().first;
            int r = q.front().second.first;
            int c = q.front().second.second;
            q.pop();
            
            // 4 directions traversal
            for(int i = 0; i < 4; i++){
                int nr = r + delr[i];
                int nc = c + delc[i];
                
                 // Checking the validity of the cell and updating if dist is shorter.
                if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]==1 && dis+1 < dist[nr][nc]){
                    dist[nr][nc]=dis+1;
                    if(nr==destination.first && nc==destination.second){
                        return dist[nr][nc];
                    }
                    q.push({dis+1,{nr,nc}});
                }
            }
        }
        
        // If no path is found from source to destination.
        return -1;
    }
};
