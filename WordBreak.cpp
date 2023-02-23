//User function template for C++

// A : given string to search
// B : vector of available strings

class Solution
{
public:
    int wordBreak(string A, vector<string> &B) {
        //code here
        int n = A.size();
        vector<bool> dp(n+1,false);
        unordered_set<string> uset;
        for(string x : B) uset.insert(x);
        dp[0]=true;
        for(int i=1;i<=n;i++){
            for(int j=0;j<i;j++){
                if(dp[j]){
                    string word=A.substr(j,i-j);
                    if(uset.find(word)!=uset.end()){
                        dp[i]=true;
                        break;
                    }
                }
            }
        }
        return dp[n];
    }
};
