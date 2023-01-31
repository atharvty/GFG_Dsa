class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    int n=S.size();
	    int i=0;
	    int j=n-1;
	    bool flag=0;
	    while(i<j){
	        if(S[i]==S[j]){
	            i++;
	            j--;
	        }
	        else{
	            flag=1;
	            break;
	        }
	    }
	    if(flag==1){
	        return 0;
	        
	    }
	    else{
	        return 1;
	    }
	}

};
