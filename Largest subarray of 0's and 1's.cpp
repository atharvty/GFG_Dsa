class Solution{
  public:
    int maxLen(int arr[], int N)
    {
        int len = 0;
        int prefixSum = 0;
        unordered_map<int,int>memo;
        memo[0] = -1;
        
        //convert 0 to -1
        for(int index = 0; index < N; index++)
        {
            if(arr[index] == 0)
                arr[index] = -1;
        }
        
        //find largest subarray with sum 0
        for(int index = 0; index < N; index++)
        {
            prefixSum += arr[index];
            
            if(memo.find(prefixSum) == memo.end())
                memo[prefixSum] = index;
                
            else
                len = max(len,index - memo[prefixSum]);
        }
        return len;
    }
};
