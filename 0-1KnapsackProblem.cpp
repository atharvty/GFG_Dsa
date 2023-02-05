class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    
    vector<vector<int>> dp;
    
    int solve(int wt[], int val[], int w, int n){
        
        if(n==0 || w==0){
            return 0;
        }
        
        if(dp[n][w] != -1){
            return dp[n][w];
        }
        
        if(wt[n-1] <= w){
            return dp[n][w]=max(val[n-1] + solve(wt,val,w-wt[n-1],n-1), solve(wt,val,w,n-1));
        }
        else if(wt[n-1] > w){
            return dp[n][w]=solve(wt,val,w,n-1);
        }
    }
    
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       dp.resize(n+1,vector<int>(W+1,-1));
       return solve(wt,val,W,n);
    }
};
