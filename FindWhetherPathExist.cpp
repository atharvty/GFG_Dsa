class Solution
{
    public:
    //Function to find whether a path exists from the source to destination.
    bool solve(int i , int j,int n ,int m,vector<vector<int>>& grid,vector<vector<int>>& vis){
        if(i < 0 || j<0 || i>= n || j >= m || grid[i][j] == 0 || vis[i][j] == 1){
            return false;
        } 
        if( grid[i][j] == 2){
            return true;
        }
        vis[i][j] = 1;
        bool a =solve(i-1,j,n,m,grid,vis);
        bool b = solve(i+1,j,n,m,grid,vis);
        bool c =solve(i,j-1,n,m,grid,vis);
        bool d = solve(i,j+1,n,m,grid,vis);
        
        return a || b|| c || d ;
    }
    
    bool is_Possible(vector<vector<int>>& grid) 
    {
        //code here
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i =0 ;i<n;i++){
            for(int j =0;j<m;j++){
                if(grid[i][j] == 1){
                    return solve(i,j,n,m,grid,vis);
                }
            }
        }
        return false;
    }
};
