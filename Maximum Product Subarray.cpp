class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	   long long minVal = arr[0];
	   long long maxVal = arr[0];
	   
	   long long maxProduct = arr[0];
	   
	   for(int i=1;i<n;i++)
	   {
	       if(arr[i]<0)
	       {
	           swap(minVal,maxVal);
	       }
	      // cout<<"maxval"<<maxVal<<" minVal"<<minVal<<endl;
	       maxVal = max((long long)arr[i], maxVal * arr[i]);
	       minVal = min((long long)arr[i], minVal * arr[i]);
	      // cout<<"maxval"<<maxVal<<" minVal"<<minVal<<endl;
	       maxProduct = max(maxProduct, maxVal);
	      // cout<<"Prod"<<maxProduct<<endl;
	   }
	    
        return maxProduct;	    
	}
};
