class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here   
        vector<long long int >left(n,1);
        vector<long long int>right(n,1);
        vector<long long int >answer(n,1);
        
        //left[0]=nums[0];(we are not considering i'th element so not include this step)
        
        for(int i=1 ; i<nums.size(); i++ ){
            left[i] = nums[i-1] * left[i-1];
        }
        
        //right[n-1]=nums[n-1];
        for(int i= n-2; i>=0; i--){
            right[i] = nums[i+1]*right[i+1];
        }
        
        for(int i=0 ; i<n ; i++){
            answer[i] = left[i]*right[i];
        }
        
        return answer;
        
    }
};
