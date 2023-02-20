class Solution
{
    private:
    int f(int i1,int i2,string &s1,string &s2,vector<vector<int>> &dp){
        if(i1==0 or i2==0) return 0;
        
        if(dp[i1][i2]!=-1) return dp[i1][i2];
        
        if(s1[i1-1]==s2[i2-1])
            return dp[i1][i2]=1+f(i1-1,i2-1,s1,s2,dp);
        
        return dp[i1][i2]=max(f(i1-1,i2,s1,s2,dp),f(i1,i2-1,s1,s2,dp));
    }
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int x, int y, string s1, string s2)
    {
        // your code here
        vector<vector<int>> dp(x+1,vector<int>(y+1,-1));
        
        return f(x,y,s1,s2,dp);
    }
};
