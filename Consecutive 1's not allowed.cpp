class Solution{
public:
	// #define ll long long
	long long mod=1e9+7;
	ll countStrings(int n) {
	    // code here
	    int endingzero=1;
	    int endingone=1;
	    int sum=endingzero+endingone;
	    
	    
	    if(n==1){
	        return sum;
	    }
	    
	    int i=2;
	    while(i<=n){
	        endingone=endingzero%mod;
	        endingzero=sum%mod;
	        sum=endingzero%mod+endingone%mod;
	        i++;
	    }
	    
	    return sum%mod;
	}
};
