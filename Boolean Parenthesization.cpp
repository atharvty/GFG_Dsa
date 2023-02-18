// User function Template for C++

class Solution{
public:
    int mod=1003;
    int f(int i,int j,bool ist,string &s,vector<vector<vector<int>>>&dp)
    {
        if(i>j)
        {
            return 0;
        }
        if(i==j)
        {
            if(ist)
            {
                return s[i]=='T';
            }
            else
            {
                return s[i]=='F';
            }
        }
        if(dp[i][j][ist]!=-1)
        {
            return dp[i][j][ist];
        }
        int way=0;
        for(int ind=i+1;ind<=j-1;ind++)
        {
            int lt=f(i,ind-1,1,s,dp);
            int lf=f(i,ind-1,0,s,dp);
            int rt=f(ind+1,j,1,s,dp);
            int rf=f(ind+1,j,0,s,dp);
            
            if(s[ind]=='&')
            {
                if(ist)
                {
                    way=(way+(rt*lt)%mod)%mod;
                }
                else
                {
                    way=(way+(rt*lf)%mod+(rf*lt)%mod+(rf*lf)%mod)%mod;
                }
            }
            else if(s[ind]=='|')
            {
                if(ist)
                {
                    way=(way+(lt*rt)%mod+(lt*rf)%mod+(lf*rt)%mod)%mod;
                }
                else
                {
                    way=(way+(rf*lf)%mod)%mod;
                }
            }
            else
            {
                if(ist)
                {
                    way=(way+(lt*rf)%mod+(lf*rt)%mod)%mod;
                }
                else
                {
                    way=(way+(lt*rt)%mod+(lf*rf)%mod)%mod;
                }
                
            }
        }
        
        return dp[i][j][ist]=way;
    }
    int countWays(int N, string S)
    {
        // code here
        vector<vector<vector<int>>>dp(N,vector<vector<int>>(N,vector<int>(2,-1)));
        
        return f(0,N-1,1,S,dp);
    }
};
