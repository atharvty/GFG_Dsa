// User function template for C++

class Solution
{
    public:
    //Function to find most frequent word in an array of strings.
    string mostFrequentWord(string arr[], int n) 
    {
        // code here
        
        int mx=INT_MIN;
        string s1="";
        unordered_map<string,int>m;
         unordered_set<string>set;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        for(auto x:m){
            mx=max(mx,x.second);
        }
        for(int i=0;i<n;i++){
            if(m[arr[i]]==mx){
                
                if(set.find(arr[i])==set.end()){
                    set.insert(arr[i]);
                
                   s1=arr[i];
                }
            }
        }
        return s1;
    }
};
