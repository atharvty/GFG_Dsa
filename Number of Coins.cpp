class Solution{

	public:
	
	int minCoins(int coins[], int M, int V) 
	{ 
	    
        vector<vector<int>> dp(M,vector<int> (V+1,1e8));
        for(int v=0;v<=V;v++)
        {
            if(v%coins[0]==0) dp[0][v]=v/coins[0];
             
        }
        
        for(int ind=1;ind<M;ind++)
        {
            for(int sum=0;sum<=V;sum++)
            {
                int ntake=dp[ind-1][sum];
                int take=1e8;
                if(coins[ind]<=sum) take=1+dp[ind][sum-coins[ind]];
                
                dp[ind][sum]=min(ntake,take);
            }
        }
        if(dp[M-1][V]>=1e8) return -1;
        else return dp[M-1][V];
	} 
	  
};
