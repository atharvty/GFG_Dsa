class Solution {
  public:
    int kanade(vector<int>vec,int n){
        int sum=0,ans=-123456;
        for(int i=0;i<n;i++){
            ans=max(ans,sum+vec[i]);
            if(sum+vec[i]>=0){
                sum+=vec[i];
            }
            else sum=0;
            
        }
        // for(int i=0;i<n;i++){
        //     cout<<vec[i]<<"  ";
        // }
        // cout<<"\n"<<ans<<"\n";
        return ans;
    }
    int maximumSumRectangle(int m, int n, vector<vector<int>> vec) {
        int ans=-12345;
        for(int i=0;i<m;i++){
            vector<int> temp(n,0);
            for(int j=i;j<m;j++){
                for(int k=0;k<n;k++){
                    temp[k]=temp[k]+vec[j][k];
                }
                ans=max(ans,kanade(temp,n));
            }
        }
        return ans;
    }
};
