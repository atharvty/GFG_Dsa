
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int A[], int N) 
    { 
        // Your code here
        
        int ans=0;
        
        for(int i=0;i<N;i++){
            for(int j=N-1;j>i;j--){
                if(A[i]<=A[j] ){
                    ans=max(j-i,ans);
                    break;
                }
            }
        }
        
        return ans;
    }
};
