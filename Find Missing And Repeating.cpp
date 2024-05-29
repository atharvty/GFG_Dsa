class Solution{
public:
    // x-y
    // x+y 
    // Maths Method
    vector<int> findTwoElement(vector<int> arr, int n) {
        long long sz = arr.size();
        long long SN = (sz*(sz+1))/2;
        long long S2N  = (sz* (sz+1) * (2*sz+1))/6;
        long long S = 0 , S2 = 0;
        for(int i = 0 ; i <n ;i++){
            S+=arr[i];
            S2+=(long long)arr[i]*(long long)arr[i];
        }
        long long val1 = S - SN;
        long long val2 = S2 - S2N;
        val2 = val2/val1;
        long long x = (val1+val2)/2;
        long long y = x - val1;
        return {(int)x,(int)y};
        
    }
};
