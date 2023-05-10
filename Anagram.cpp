class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        unordered_map<char,int>mp1,mp2;
        
        for(int i=0;i<a.length();i++){
            mp1[a[i]]++;
        }
        for(int i=0;i<b.length();i++){
            mp2[b[i]]++;
        }
        
        if(a.length()!=b.length()){
            return false;
        }
        for(int i=0;i<a.length();i++){
           
            if(mp1[a[i]]!=mp2[a[i]]){
                return false;
            }
        }
        return true;
        
    }

};
