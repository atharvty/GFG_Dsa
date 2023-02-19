// User function Template for C++

class Solution{
public:
    bool candivide(int n,int *arr,int ind,int target,vector<vector<int>> &dp){
        if(ind==n){
            if(target==0) return true;
            return false;
        }
        if(target<0){return false;}
        if(target==0){return true;}
        if(dp[ind][target]!=-1) return dp[ind][target];
        return dp[ind][target]=candivide(n,arr,ind+1,target-arr[ind],dp) || candivide(n,arr,ind+1,target,dp);
    }
    int equalPartition(int N, int arr[])
    {
        // code here
        int sum=0;
        for(int i=0;i<N;i++){
            sum+=arr[i];
        }
        if(sum&1){
           return 0;
        }
        else{
            sum/=2;
            vector<vector<int>> dp(N+1,vector<int> (sum+1,-1));
            if(candivide(N,arr,0,sum,dp)){
               return 1;
            }
            else{
                return 0;
            }
        }
    }
};
