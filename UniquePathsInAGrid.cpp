//User function Template for C++

class Solution {
  public:
  int mod = 1e9 +7;
    int solve(int i,int j,int n,int m,vector<vector<int>> &g,vector<vector<int>> &dp){
        if(i>=n or j>=m or g[i][j]==0){
            return 0;
        }
        
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(i==n-1 and j ==m-1 ){
            return dp[i][j]=1;
        }
        
        
        
        int ans = (solve(i,j+1,n,m,g,dp)%mod + solve(i+1,j,n,m,g,dp)%mod)%mod;
        
        return dp[i][j]=ans;
    }
    int uniquePaths(int n, int m, vector<vector<int>> &grid) {
        // code here
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
     
        return solve(0,0,n,m,grid,dp);
        
        
    }
};
