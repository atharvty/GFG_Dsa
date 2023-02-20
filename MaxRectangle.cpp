/*You are required to complete this method*/

class Solution{
  public:
    
    
    int f(vector<int>arr,int n){
        int ans = 0;
        stack<int>st;
        for(int i=0;i<=n;i++){
            while(!st.empty() and (i==n or arr[st.top()]>=arr[i])){
                int height = arr[st.top()];
                int width;
                st.pop();
                if(st.empty()) width = i;
                else width = i-st.top()-1;
                ans = max(ans,width*height);
            }
            st.push(i);
        }
        return ans;
    }
    
    int maxArea(int M[MAX][MAX], int n, int m) {
        int finalans = 0;
        vector<int>height(m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(M[i][j]==1) height[j]++;
                else height[j]=0;
            }
            finalans = max(finalans,f(height,m));
        }
        return finalans;
    }
};
