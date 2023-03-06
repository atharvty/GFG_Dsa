// User function Template for C++

class Solution{
public:
int mod=1e9+7;
int sol(int n,vector<vector<int>>&arr){
     vector<int>curr(n,0),next(n,0);
    for(int j=0;j<n;j++)
    next[j]=arr[n-1][j];
    for(int i=n-2;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            int ans1=0,ans2=0,ans3=0;
            ans1=next[j];
            if(j-1>=0)
            ans2=next[j-1];
            if(j+1<n)
            ans3=next[j+1];
            curr[j]=arr[i][j]+max(ans1,max(ans2,ans3));
        }
        next=curr;
    }
    int result=0;
    for(int j=0;j<n;j++)
    result=max(result,next[j]);
    return result;
}
    int maximumPath(int N, vector<vector<int>> Matrix)
    {
    int  ans=sol(N,Matrix);
    return ans;
    }
};
