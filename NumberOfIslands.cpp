class Solution {
    private :
    void bfs(int row , int col , vector<vector<int>> &vis , vector<vector<char>>& grid){
        vis[row][col] = 1;
        queue<pair<int,int>> q;
        q.push({row , col});
        int n = grid.size();
        int m = grid[0].size();
        
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            
            for(int nrow = -1;nrow <= 1;nrow++){
                for(int ncol = -1;ncol <= 1;ncol++){
                    int delrow = row + nrow;
                    int delcol = col + ncol;
                    
                    if(delrow >= 0 && delrow < n && delcol >= 0 && delcol < m &&
                    grid[delrow][delcol] == '1' && !vis[delrow][delcol]){
                        vis[delrow][delcol] = 1;
                        q.push({delrow,delcol});
                    }
                }
            }
        }
    }
  public:
    
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        int cnt=0;
        
        for(int row = 0;row<n;row++){
            for(int col = 0;col < m;col++){
                if(!vis[row][col] && grid[row][col] == '1'){
                    cnt++;
                    bfs(row,col,vis,grid);
                }
            }
        }
        return cnt;
    }
};
