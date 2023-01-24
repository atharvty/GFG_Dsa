class Solution{
public:	
	// Converts arr[0..n-1] to reduced form.
	void convert(int arr[], int n) {
	   vector<pair<int,int>> c;
	    for ( int i=0; i<n; i++){
	        c.push_back({arr[i], i});
	    }
	    sort(c.begin(),c.end());
	    for(int i=0; i<n; i++){
	        arr[c[i].second] =i;
	    }
	}

};
