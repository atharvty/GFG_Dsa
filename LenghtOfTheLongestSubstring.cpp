class Solution{
    public:
    int longestUniqueSubsttr(string s){
        //code
        int maxi=INT_MIN;
        // map<char,int>umap;
        vector<int>vec(256,-1);
        int l=0;
        int r=0;
        while(r<s.size()){
            if(vec[s[r]]!=-1){
                l= max(l,vec[s[r]]+1);
               
            }
           
               
                 vec[s[r]]=r;
            
             maxi=max(maxi,r-l+1);
             r++;
        }
        return maxi;
        
    }
};
