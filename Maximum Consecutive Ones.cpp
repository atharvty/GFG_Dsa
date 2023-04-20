class Solution {
  public:
    int longestOnes(int n, vector<int>& nums, int k) {
        // Code here
        int countz=0;
        
        
        int i=0;
        int j=0;
        int maxcount=0;
        
        while(i<n){
            if(nums[i]==1){
                i++;
            }
            else{
                if(k>0){
                    k--;
                    i++;
                }
                else{
                    while(nums[j]==1){
                        j++;
                    }
                    j++;
                    k++;
                }
            }
            maxcount=max(maxcount,i-j);
        }
        return maxcount;
        
    
    }
};
