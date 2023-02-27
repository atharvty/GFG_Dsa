class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	
    	
    	int count=1;
    	int max=1;
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	int i=1;
    	int j=0;
    	while(i<n && j<n){
    	    if(arr[i]<=dep[j]){
    	        i++;
    	        count++;
    	        if(count>max){
    	            max=count;
    	        }
    	    }
    	    else{
    	        j++;
    	        count--;
    	    }
    	    
    	}
    	return max;
    }
    
};
