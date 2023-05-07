//User function template for C++
class Solution{
public:	

	void matchPairs(char nuts[], char bolts[], int n) {
	    // code here
	    unordered_map<char, int> mp;
        
        for( int i = 0; i< n;i++)
        {
            mp[nuts[i]]++;
        }
        
        char arr[] = {'!', '#', '$', '%', '&', '*', '@', '^', '~'};
        
        int count  = 0;
        
        for( int i = 0; i< 9; i++)
        {
            if(mp.find(arr[i]) != mp.end())
            {
                nuts[count] = arr[i];
                bolts[count] = arr[i];
                count++;
            }
        }
	}

};
