class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        long low = 1;
        long high = x;
        long ans;
        
        while(low<=high ){
            long mid = (high-low)/2 + low;
            if(mid*mid<=x){
                low = mid+1;
                ans = mid;
            }
            else{
                high = mid-1;
           
            }
        }
        return ans;
    }
};
